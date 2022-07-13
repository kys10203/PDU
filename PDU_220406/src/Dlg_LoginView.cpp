#include "Dlg_LoginView.h"
#include "view_list.h"
#include "app.h"

CDlgLoginView::CDlgLoginView():CDlgView(){

	m_gTextTile_ID = NULL;
	m_gTextTile_PW = NULL;
	m_gMain = NULL;
	m_pNumPad = NULL;
	m_gTextTile_ID = NULL;
	m_gTextTile_PW = NULL;
}

CDlgLoginView::~CDlgLoginView(){

	if(m_gMain != NULL){
		delete m_gMain;
		m_gMain = NULL;
	}

	if(m_gTextTile_ID != NULL){
		delete m_gTextTile_ID;
		m_gTextTile_ID = NULL;
	}

	if(m_gTextTile_PW != NULL){
		delete m_gTextTile_PW;
		m_gTextTile_PW = NULL;
	}

	if(m_pNumPad != NULL){
		delete m_pNumPad;
		m_pNumPad = NULL;
	}

}

void CDlgLoginView::Hide(Graphics * pScreenDC){

	if(m_gMain != NULL){
		delete m_gMain;
		m_gMain = NULL;
	}

	if(m_gTextTile_ID != NULL){
		delete m_gTextTile_ID;
		m_gTextTile_ID = NULL;
	}

	if(m_gTextTile_PW != NULL){
		delete m_gTextTile_PW;
		m_gTextTile_PW = NULL;
	}

	if(m_pNumPad != NULL){
		if(m_pNumPad->IsPainted())	{
			m_pNumPad->Hide(pScreenDC);
			delete m_pNumPad;
			m_pNumPad = NULL;
		}
	}
}

void CDlgLoginView::Show(Graphics * pScreenDC){

	m_fTitle = new Font("DIGIT", 20);

	m_cWhite = new Color(255,255,255);
	m_cGray = new Color(221,221,221);
	m_cBlack = new Color(0,0,0);
	m_bBackground_white = new Brush(*m_cWhite);
	m_bBackground_black = new Brush(*m_cBlack);
	m_bBackground_gray = new Brush(*m_cGray);

	m_gMain = new Graphics(480,800);
	m_gTextTile_Version = new Graphics(100, 40);
	m_gTextTile_NumPad = new Graphics(210, 40);
	m_gTextTile_ID = new Graphics(210, 40);
	m_gTextTile_PW = new Graphics(210, 40);


	m_pNumPad = new CPopup();
	m_pInputError = new CPopup();
	m_pLoginError = new CPopup();

	m_bmp_Main = new Image("res/0_0_intro.bmp");

	m_gMain->DrawImage(m_bmp_Main, PointF(0, 0));

	m_pNumPad->Create("res/0_input_num.bmp", 480, 480);
//	m_pInputError->Create("res/0_message_bg_0.bmp", 360, 189);
	m_pInputError->Create("res/0_message_bg_0.bmp", 360, 189 );
	m_pLoginError->Create("res/0_message_bg_5.bmp", 360, 189);

	pScreenDC->DrawRotateLayer(m_bBackground_white, PointF(799, 0), m_gMain, RectF(0, 0, 480, 800), ROT_90);

	m_nNumPadStatus = 0;
	m_strNumPadTmp = "";
	m_strID = "";
	m_strPasswd = "";

	m_strVer = "V 0.00";
	m_gTextTile_Version->FillRectangle(m_bBackground_white, RectF(0, 0, 100, 40));
	m_gTextTile_Version->DrawString(m_strVer.c_str(), -1, m_fTitle, PointF(0, 25), m_bBackground_black);
	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(770, 220), m_gTextTile_Version, RectF(0, 0, 100, 40), ROT_90);
}

void CDlgLoginView::OnTouchPress(Graphics * pScreenDC, INT32 pX, INT32 pY){

	printf("Login View Touch x = %d , y = %d\n",pX,pY);

	if(m_pInputError->IsPainted()){

		m_pInputError->Hide(pScreenDC);

	}else if(m_pLoginError->IsPainted()){

		m_pInputError->Hide(pScreenDC);

	}else if(m_pNumPad->IsPainted()){

		NumPadPress(pScreenDC, pX, pY);

	}else if( (pX >= 40) && (pX <= 135) && (pY >= 40) && (pY <= 440) ){
		printf("%s / %s Login",m_strID.c_str(),m_strPasswd.c_str());
				g_pMainView = new CDlgMainView();
				g_pApp->ChangeView(g_pMainView, this, 300);
//		CAuth auth;
//		if(auth.Authenticate(m_strID, m_strPasswd,1) == true){
//			printf("succese\n");
//			if(g_pApp != NULL){
//				g_pMainView = new CDlgMainView();
//				g_pApp->ChangeView(g_pMainView, this, 300);
//			}
//		}else{
//			printf("fail\n");
//		}
	}else if( (pX >= 200) && (pX <= 240) && (pY >= 40) && (pY <= 440) ){
		printf("PW NumPad\n");
		m_pNumPad->Show(pScreenDC,550, 0);
		m_nNumPadStatus = 2;

	}else if( (pX >= 300) && (pX <= 340) && (pY >= 40) && (pY <= 440) ){
		printf("ID NumPad\n");
		m_pNumPad->Show(pScreenDC,550, 0);
		m_nNumPadStatus = 1;
	}
}

void CDlgLoginView::NumPadPress(Graphics * pScreenDC, INT32 pX, INT32 pY){

	if( (pX >= 515) && (pX <= 560) && (pY >= 400) && (pY <= 440) ){
		printf("esc\n");
		m_strNumPadTmp = "";
		m_nNumPadStatus = 0;
		m_pNumPad->Hide(pScreenDC);
	}else if( (pX >= 370) && (pX <= 440) && (pY >= 15) && (pY <= 110) ){
		printf("1\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '1';
		}

	}else if( (pX >= 370) && (pX <= 440) && (pY >= 130) && (pY <= 225) ){
		printf("2\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '2';
		}

	}else if( (pX >= 370) && (pX <= 440) && (pY >= 245) && (pY <= 345) ){
		printf("3\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '3';
		}
	}else if( (pX >= 370) && (pX <= 440) && (pY >= 365) && (pY <= 460) ){
		printf("clear\n");
		m_strNumPadTmp = "";
	}else if( (pX >= 285) && (pX <= 355) && (pY >= 15) && (pY <= 110) ){
		printf("4\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '4';
		}

	}else if( (pX >= 285) && (pX <= 355) && (pY >= 130) && (pY <= 225) ){
		printf("5\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '5';
		}

	}else if( (pX >= 285) && (pX <= 355) && (pY >= 245) && (pY <= 345) ){
		printf("6\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '6';
		}

	}else if( (pX >= 285) && (pX <= 355) && (pY >= 365) && (pY <= 460) ){
		printf("backspace\n");
		if(static_cast<INT32>(m_strNumPadTmp.size()) > 0){
			m_strNumPadTmp.pop_back();
			m_gTextTile_NumPad->FillRectangle(m_bBackground_white, RectF(0, 0, 210, 40));
			m_gTextTile_NumPad->DrawString(m_strNumPadTmp.c_str(), -1, m_fTitle, PointF(0, 25), m_bBackground_black);
			pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(475, 50), m_gTextTile_NumPad, RectF(0, 0, 210, 40), ROT_90);
		}
	}else if( (pX >= 200) && (pX <= 270) && (pY >= 15) && (pY <= 110) ){
		printf("7\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '7';
		}

	}else if( (pX >= 200) && (pX <= 270) && (pY >= 130) && (pY <= 225) ){
		printf("8\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '8';
		}

	}else if( (pX >= 200) && (pX <= 270) && (pY >= 245) && (pY <= 345) ){
		printf("9\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '9';
		}
	}else if( (pX >= 200) && (pX <= 270) && (pY >= 365) && (pY <= 460) ){
		printf("ADMIN\n");
		if(m_nNumPadStatus == 1){
			m_strNumPadTmp = "ADMINISTRATOR";
		}
	}else if( (pX >= 105) && (pX <= 175) && (pY >= 15) && (pY <= 110) ){
		printf(".\n");

	}else if( (pX >= 105) && (pX <= 175) && (pY >= 130) && (pY <= 225) ){
		printf("0\n");
		if((INT32)m_strNumPadTmp.size() < 13){
			m_strNumPadTmp = m_strNumPadTmp + '0';
		}
	}else if( (pX >= 105) && (pX <= 175) && (pY >= 245) && (pY <= 345) ){
		printf("-\n");

	}else if( (pX >= 105) && (pX <= 175) && (pY >= 365) && (pY <= 460) ){
		printf("ENTER\n");
		m_pNumPad->Hide(pScreenDC);
		m_nNumPadStatus *= -1;
	}

	if(m_nNumPadStatus > 0){
		m_gTextTile_NumPad->FillRectangle(m_bBackground_white, RectF(0, 0, 210, 40));
		m_gTextTile_NumPad->DrawString(m_strNumPadTmp.c_str(), -1, m_fTitle, PointF(0, 25), m_bBackground_black);
		pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(475, 50), m_gTextTile_NumPad, RectF(0, 0, 210, 40), ROT_90);
	}else{
		if(m_nNumPadStatus == -1){
			if((INT32)m_strNumPadTmp.size() > 0){
				m_strID = m_strNumPadTmp;
				m_strNumPadTmp = "";
				m_gTextTile_ID->FillRectangle(m_bBackground_white, RectF(0, 0, 210, 40));
				m_gTextTile_ID->DrawString(m_strID.c_str(), -1, m_fTitle, PointF(0, 25), m_bBackground_black);
				pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(315, 50), m_gTextTile_ID, RectF(0, 0, 210, 40), ROT_90);
			}else{
				m_pInputError->Show(pScreenDC, 493, 60);
			}

		}else if(m_nNumPadStatus == -2){
			m_strPasswd = m_strNumPadTmp;
			std::string tmp;
			for(INT32 i = 0; i<(INT32)m_strNumPadTmp.size(); i++){
				tmp = tmp + "*";
			}
			m_strNumPadTmp = "";
			m_gTextTile_PW->FillRectangle(m_bBackground_white, RectF(0, 0, 210, 40));
			m_gTextTile_PW->DrawString(tmp.c_str(), -1, m_fTitle, PointF(0, 25), m_bBackground_black);
			pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(215, 50), m_gTextTile_PW, RectF(0, 0, 210, 40), ROT_90);
		}
	}
}
