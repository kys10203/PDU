#include "app.h"

using namespace Geminit;

// app instance
CApp *g_pApp = NULL;
CDlgLoginView * g_pLoginView = NULL;
CDlgMainView * g_pMainView = NULL;
CDlgGPSView * g_pGPSView = NULL;

static CHAR* fbdevice = "/dev/fb0";
static CHAR* touchDevice = "/dev/input/event2";

char KEY_Button = 0;
void *Message_TX_Task();
void *Message_RX_Task();

CApp::CApp() {

	m_touchCheck = false;
}

CApp::~CApp() {

}

void GpioSet() {

	CHAR buf[1024];
	INT32 fd_sw3, fd_sw4, fd_sw5;
	INT32 gpio_sw3 = IMX_GPIO_NR(3, 24);	//88
	INT32 gpio_sw4 = IMX_GPIO_NR(3, 19);	//83
	INT32 gpio_sw5 = IMX_GPIO_NR(3, 21);	//85

	fd_sw3 = open("/sys/class/gpio/export", O_WRONLY);
	sprintf(buf, "%d", gpio_sw3);
	write(fd_sw3, buf, strlen(buf));
	close(fd_sw3);

	sprintf(buf, "/sys/class/gpio/gpio%d/direction", gpio_sw3);
	fd_sw3 = open(buf, O_WRONLY);
	write(fd_sw3, "in", 2);
	close(fd_sw3);

	fd_sw4 = open("/sys/class/gpio/export", O_WRONLY);
	sprintf(buf, "%d", gpio_sw4);
	write(fd_sw4, buf, strlen(buf));
	close(fd_sw4);

	sprintf(buf, "/sys/class/gpio/gpio%d/direction", gpio_sw4);
	fd_sw4 = open(buf, O_WRONLY);
	write(fd_sw4, "in", 2);
	close(fd_sw4);

	fd_sw5 = open("/sys/class/gpio/export", O_WRONLY);
	sprintf(buf, "%d", gpio_sw5);
	write(fd_sw5, buf, strlen(buf));
	close(fd_sw5);

	sprintf(buf, "/sys/class/gpio/gpio%d/direction", gpio_sw5);
	fd_sw5 = open(buf, O_WRONLY);
	write(fd_sw5, "in", 2);
	close(fd_sw5);

	printf("GPIO SET COMPLETE!!!\n");
}


void CApp::FPGAReadThread(){

	char buf[1024];
	memset(buf, 0, 1024);

	while (1) {

		int bufSize = (int) uart_tmp.uart_read(buf, 1024);

		if (bufSize > 0) {
			printf("Recived %d size data : ", bufSize);
			for (int i = 0; i < bufSize; i++) {
				printf("%02x ", buf[i]);
			}
			printf("\n\n");
		}
	}
}

void * Message_TX_Task(void * data){

	key_t key=12345;
	int msqid;
	struct message msg;
	int fd_gpio;
	CHAR * mem_base;
	int fd;
	struct pollfd fdset[2];
	int ret;
	char ch;

	printf("Message_TX START Task\n");
	fd_gpio = open("/sys/class/gpio/gpio123/value", O_RDONLY|O_NONBLOCK);
	lseek(fd_gpio, 0, SEEK_SET);
	ret = read(fd_gpio, &ch, 1);
	memset(fdset, 0, sizeof(fdset));
	fdset[0].fd = STDIN_FILENO;
	fdset[0].events = POLLIN;
	fdset[1].fd = fd_gpio;
	fdset[1].events = POLLPRI;

	if((fd = open("/dev/mem", O_RDWR | O_SYNC)) == -1){
		printf("error\n");
		exit(0);
	}
	fflush(stdout);

	mem_base = (CHAR *)mmap(0, OCRAM_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, OCRAM_BASE_ADDR & ~SIZE_MASK);

	if(mem_base == (void *) -1){
		printf("error\n");
		exit(0);
	}
	fflush(stdout);
	msg.msg_type = 1;

	//msqid를 얻어옴.
	if((msqid=msgget(key,IPC_CREAT|0666))==-1){
		printf("msgget failed\n");
		exit(0);
	}

	while(1){
		ret = poll(fdset, 2, 3*1000);
		if (ret < 0) {
			perror("poll");
			break;
		}
		if (fdset[1].revents & POLLPRI)	{
			lseek(fd_gpio, 0, SEEK_SET);
			ret = read(fd_gpio, &ch, 1);
			memcpy(&msg.data, mem_base, sizeof(struct real_data));
			if(msgsnd(msqid,&msg, sizeof(struct real_data),0)==-1){
				printf("msgsnd failed\n");
				exit(0);
			}
		}else if (fdset[0].revents & POLLIN){
			KEY_Button = 1;
			printf("Message_TX Task kill \r\n");
			break;
		}else{
			//defense code
		}

		fflush(stdout);
		usleep(1000000);  // 1ms

	}
	fflush(stdout);
	close(fd);
	close(fd_gpio);
	if(munmap(mem_base, OCRAM_SIZE) == -1){
		printf("error\n");
		exit(0);
	}
	pthread_exit(NULL);

}

void *Message_RX_Task(void *data){
	key_t key=12345;
	int msqid;
	struct message msg;
	int Msg_rtn;
	printf("Message_RX START Task\n");

	//받아오는 쪽의 msqid얻어오고
	if((msqid=msgget(key,IPC_CREAT|0666))==-1) {
		printf("msgget failed\n");
		exit(0);
	}

	while(1) {
		//메시지를 받는다.
		Msg_rtn = msgrcv(msqid,&msg,sizeof(struct real_data),0,MSG_NOERROR | IPC_NOWAIT);
		if(Msg_rtn > 0) {
			printf("Msg_rtn:%d   %f   %f   %f  \n", Msg_rtn, msg.data.Lon, msg.data.Lat, msg.data.Heading);
		} else if (KEY_Button == 1) {
			//이후 메시지 큐를 지운다.
			if(msgctl(msqid,IPC_RMID,NULL)==-1){
				printf("msgctl failed\n");
				exit(0);
			}
			printf("Message_RX_Task Kill \r\n");
			break;
		}
		usleep(1000);  // 1ms
	}
	pthread_exit(NULL);
}

void CApp::TouchEvThread() {
	while (1) {
		poll_state = poll(static_cast<struct pollfd*>(&poll_events), 1, 1000);
		if (poll_state > 0U) {
			if(&ev != NULL){
				read( key_fd, &ev, sizeof(ev));
				if((ev.type == EV_KEY)){
					if(ev.value == 1){
						m_touchCheck = true;
					}
				}else{
					if(m_touchCheck){
						if (ev.type == EV_ABS ){
							if( ev.code == ABS_X ){
								INT32 tmpX = (INT32)round(((FLOAT_32)ev.value/3823)*800);
//								INT32 tmpX = ev.value;
								m_curX = tmpX;

								if(m_curX > 800){
									m_curX = 800;
								}else{
									//defense code
								}
							}else if ( ev.code == ABS_Y){
								INT32 tmpY = (INT32)round(((FLOAT_64)ev.value/3959)*480);
//								INT32 tmpY = ev.value;

								m_curY = tmpY;
								m_touchCheck = false;
								if(m_curY > 480){
									m_curY = 480;
								}
//								printf("X = %d , Y = %d\n",m_curX,m_curY);

								m_pCurrDlg->OnTouchPress(graphics, m_curX, m_curY);
								//TouchEvent();
							}else{
								//defense code
							}
						}

					}
				}
			}
		}
	}
}
void* m4_comm_thread(void *arg) {
	if (g_pApp != NULL) {
		//g_pApp->M4ReadThread();
	}
	return NULL;
}
void* touch_ev_thread(void *arg) {
	if (g_pApp != NULL) {
		g_pApp->TouchEvThread();
	}
	return NULL;
}

void* fpga_read_thread(void *arg) {
	if (g_pApp != NULL) {
		g_pApp->FPGAReadThread();
	}
	return NULL;
}

void CApp::InitApp() {
	key_fd = open(touchDevice, O_RDONLY, 0);

	poll_events.fd = key_fd;
	poll_events.events = POLLIN;
	poll_events.revents = 0;


	GpioSet();

}

void CApp::StartGui(){

	graphics = new Graphics(fbdevice);

	m_fTitle_18 = new Font("DIGIT", 18);

	m_cWhite = new Color(255,255,255);
	m_cGray = new Color(221,221,221);
	m_cBlack = new Color(0,0,0);
	m_bBackground_white = new Brush(*m_cWhite);
	m_bBackground_black = new Brush(*m_cBlack);
	m_bBackground_gray = new Brush(*m_cGray);

}


void CApp::CreateThread(){
	m_thTouch.Create(touch_ev_thread, reinterpret_cast<CApp*>(this));
	//m_thFPGA.Create(fpga_read_thread, reinterpret_cast<CApp*>(this));
	//m_tM4.Create(m4_comm_thread, reinterpret_cast<CApp*>(this));

	//	INT32 result[2];
	//	INT32 rc;
	//	pthread_t threads[2];
	//	printf("!!!PDU Hello World!!! \r\n");
	//
	//	pthread_create(&threads[0], NULL, &Message_TX_Task, NULL);
	//	pthread_create(&threads[1], NULL, &Message_RX_Task, NULL);
	//
	//	rc = pthread_join(threads[0], (void **)&result[0]);
	//	if(rc != 0){
	//		printf("Error in thread Message_TX_Task : %d\n", rc);
	//	}
	//
	//	rc = pthread_join(threads[1], (void **)&result[1]);
	//	if(rc != 0){
	//		printf("Error in thread Message_RX_Task : %d\n", rc);
	//	}
}

void CApp::ClearView(){
	Graphics * clear = new Graphics(799,480);
	graphics = new Graphics(fbdevice);
	clear->FillRectangle(m_bBackground_white, RectF(0, 0, 799, 480));
	graphics->DrawLayer(m_bBackground_white,  PointF(0, 0), clear, RectF(0, 0, 799, 480));
}
void CApp::ChangeView(CDlgView * pNew, CDlgView * pOld, const U_INT32 delay_msec){

	usleep(delay_msec * 50U);

	if(pOld != NULL){
		pOld->Hide(graphics);
	}
	usleep(delay_msec * 50U);

	m_pCurrDlg = pNew;
	ClearView();
	usleep(delay_msec * 50U);
	printf("1\n");
	m_pCurrDlg->Show(graphics);
	printf("2\n");

	if(pOld != NULL){
		delete pOld;
		pOld = NULL;
	}
}
bool CApp::Run() {

	if(g_pApp == NULL){
		g_pApp = this;
	}

	InitApp();
	CreateThread();
	printf("***DBG !!\n");
	StartGui();
	printf("***DBG !!\n");
	g_pMainView = new CDlgMainView();
	if(g_pMainView!=NULL){
		g_pMainView->Show(graphics);
		m_pCurrDlg = g_pMainView;
	}

//	g_pLoginView = new CDlgLoginView();
//	if(g_pLoginView!=NULL){
//		g_pLoginView->Show(graphics);
//		m_pCurrDlg = g_pLoginView;
//	}

	printf("********** LOOP START\n");

	std::string cmd;
	int dayNightMode = 0;
	int headingupMode = 0;
	bool panningMode = false;

	while (1) {

		if(cmd == "m"){
			g_pMainView->Move(graphics);
		}
	}
	return 0;
}
