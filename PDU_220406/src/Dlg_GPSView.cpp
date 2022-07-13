/*
 * DlgGPSView.cpp
 *
 *  Created on: 2022. 4. 5.
 *      Author: suhwan
 */

#include "Dlg_GPSView.h"
#include "view_list.h"
#include "app.h"

using namespace Geminit;

CDlgGPSView::CDlgGPSView() {
	// TODO Auto-generated constructor stub

}

CDlgGPSView::~CDlgGPSView() {
	// TODO Auto-generated destructor stub
}

void CDlgGPSView::Show(Graphics *pScreenDC) {
	m_fTitle = new Font("DIGIT", 20);

	m_cWhite = new Color(255, 255, 255);
	m_cGray = new Color(221, 221, 221);
	m_cBlack = new Color(0, 0, 0);

	m_bBackground_white = new Brush(*m_cWhite);
	m_bBackground_black = new Brush(*m_cBlack);
	m_bBackground_gray = new Brush(*m_cGray);

	m_gMainView_Buf = new Graphics(480, 800);

	m_bmp_Main = new Image("res/0_0_gps_bg.bmp");

	m_gMainView_Buf->DrawImage(m_bmp_Main, PointF(0, 0));

	pScreenDC->DrawRotateLayer(m_bBackground_white, PointF(799, 0), m_gMainView_Buf,
			RectF(0, 0, 480, 800), ROT_90);
}

void CDlgGPSView::Hide(Graphics *pScreenDC) {

}

void CDlgGPSView::OnTouchPress(Graphics *pScreenDC, INT32 pX, INT32 pY) {
	printf("GPS View Touch x = %d , y = %d\n", pX, pY);

	if ((pX >= 780) && (pX <= 800) && (pY >= 400) && (pY <= 480)) {
		printf("Exit GPS View \n");
		g_pMainView = new CDlgMainView();
		if (g_pMainView != NULL) {
			g_pApp->ChangeView(g_pMainView, this, 300);
		}
	}
}

