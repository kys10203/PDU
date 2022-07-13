#ifndef DLG_LOGINVIEW_H_
#define DLG_LOGINVIEW_H_

#include "include/include/gdi/graphics.h"
#include "popup.h"
#include "defList.h"
#include "auth.h"
#include <string>
#include "Dlg_View.h"

using namespace Geminit;

class CDlgLoginView  : public CDlgView
{
public:
	CDlgLoginView();
	~CDlgLoginView();
	CDlgLoginView(const CDlgLoginView& tcv):CDlgView(){ m_gMain = tcv.m_gMain;	}

public:
	std::string m_strNumPadTmp;
	std::string m_strID;
	std::string m_strPasswd;
	std::string m_strVer;

	Brush * m_bBackground_white;
	Brush * m_bBackground_gray;
	Brush * m_bBackground_black;

	Color * m_cBlack;
	Color * m_cWhite;
	Color * m_cGray;

	Font *m_fTitle;

	Graphics * m_gMain;
	Graphics * m_gTextTile_Version;
	Graphics * m_gTextTile_NumPad;
	Graphics * m_gTextTile_ID;
	Graphics * m_gTextTile_PW;

	INT32 m_nNumPadStatus;

	Image * m_bmp_Main;

	CPopup * m_pNumPad;
	CPopup * m_pInputError;
	CPopup * m_pLoginError;

public:

	virtual void Show(Graphics * pScreenDC);
	virtual void Hide(Graphics * pScreenDC);
	virtual void OnTouchPress(Graphics * pScreenDC, INT32 pX, INT32 pY);
	void NumPadPress(Graphics * pScreenDC,INT32 pX, INT32 pY);

};

#endif /* DLG_LOGINVIEW_H_ */
