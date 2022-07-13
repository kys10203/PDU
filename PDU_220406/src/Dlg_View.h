/*
 * dlg_view.h
 *
 *  Created on: 2022. 3. 11.
 *      Author: suhwan
 */

#ifndef DLG_VIEW_H_
#define DLG_VIEW_H_

#include "include/include/gdi/graphics.h"
#include "defList.h"

using namespace Geminit;

class CDlgView
{
public:
	CDlgView();
	~CDlgView();
	CDlgView(const CDlgView& tcv){	m_nSelect = tcv.m_nSelect;}


public:
	INT32 m_nSelect;
	U_INT32 m_nCursorPos;
	Graphics * m_pClips;
	U_INT32 m_nClipsCnt;
	bool m_bShow;

public:
	virtual void Show(Graphics * pScreenDC){};
	virtual void Hide(Graphics * pScreenDC){};
	virtual void OnTouchPress(Graphics * pScreenDC, INT32 pX, INT32 pY){};
};

#endif /* DLG_VIEW_H_ */
