/*
 * DlgGPSView.h
 *
 *  Created on: 2022. 4. 5.
 *      Author: suhwan
 */

#ifndef DLG_GPSVIEW_H_
#define DLG_GPSVIEW_H_

#include "include/include/gdi/graphics.h"
#include "popup.h"
#include "defList.h"
#include "auth.h"
#include <string>
#include "Dlg_View.h"

using namespace Geminit;

class CDlgGPSView: public CDlgView {
public:
	CDlgGPSView();
	virtual ~CDlgGPSView();

public:
	Brush *m_bBackground_white;
	Brush *m_bBackground_gray;
	Brush *m_bBackground_black;

	Color *m_cBlack;
	Color *m_cWhite;
	Color *m_cGray;

	Font *m_fTitle;

	Graphics *m_gMainView_Buf;

	Image *m_bmp_Main;

public:

	virtual void Show(Graphics * pScreenDC);
	virtual void Hide(Graphics * pScreenDC);
	virtual void OnTouchPress(Graphics * pScreenDC, INT32 pX, INT32 pY);
};

#endif /* DLG_GPSVIEW_H_ */
