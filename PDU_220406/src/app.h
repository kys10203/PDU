#ifndef APP_H_
#define APP_H_

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <signal.h>
#include <stdio.h>
#include <poll.h>
#include <math.h>
#include <string>
#include <linux/input.h>
#include <linux/fb.h>
#include <linux/ioctl.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/msg.h>
#include "uart.h"
#include "include/include/gdi/graphics.h"

#include "Dlg_LoginView.h"
#include "thread.h"
#include "popup.h"
#include "view_list.h"

using namespace Geminit;

#define IMX_GPIO_NR(port, index)    ((((port)-1)*32)+((index)&31))

class CApp
{
public:
	CApp();
	~CApp();

public:
	U_INT32	key_fd;
	U_INT32	poll_state;
	struct	input_event ev;
	struct pollfd     poll_events;
	bool m_touchCheck;

	INT32 fd_sw3, fd_sw4, fd_sw5;
	CHAR cur_sw3_val = 1, cur_sw4_val = 1, cur_sw5_val = 1;
	CHAR pre_sw3_val = 1, pre_sw4_val = 1, pre_sw5_val = 1;

	CUartIO uart_tmp;
	CThread m_thTouch;
	CThread m_thFPGA;
	CThread m_tM4;

	Graphics * graphics;

	Brush * m_bBackground_white;
	Brush * m_bBackground_gray;
	Brush * m_bBackground_black;

	Color * m_cBlack;
	Color * m_cWhite;
	Color * m_cGray;

	Font *m_fTitle_18;

	INT32 m_curX, m_curY;

	CDlgView * m_pCurrDlg;

public:
	bool Run();
	void InitApp();
	void TouchEvThread();
	void FPGAReadThread();
	void M4ReadThread();

	void StartGui();


	void CreateThread();

	void ChangeView(CDlgView * pNew, CDlgView * pOld, const U_INT32 delay_msec);
	void ClearView();

};
#endif /* APP_H_ */
