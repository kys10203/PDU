

#ifndef POPUP_H_
#define POPUP_H_

#include "defList.h"
#include <string>
#include "include/include/gdi/graphics.h"

using namespace Geminit;

class CPopup
{
public:
	CPopup();
	~CPopup();
	CPopup(const CPopup& tcv){	m_gClip = tcv.m_gClip;	}

public:
	Image * m_bmp_BgImg;
	Graphics * m_gClip;
	Graphics * m_gBg;
	Brush * m_bg;
	INT32 m_nWidth;
	INT32 m_nHeight;
	INT32 m_nPosX;
	INT32 m_nPosY;
	bool m_bShow;

public:
	bool Create(const CHAR * const pszFileName, const INT32 width, const INT32 height);
	void Delete();
	void Show(Graphics *  pDestDC, const U_INT32 x, const U_INT32 y);
	void Hide(Graphics * pDestDC);
	bool IsPainted()const;
};



#endif /* POPUP_H_ */
