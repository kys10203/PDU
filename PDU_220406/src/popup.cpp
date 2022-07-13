#include "popup.h"
#include <iostream>
#include <linux/input.h>

CPopup::CPopup(){
	CPopup::m_bmp_BgImg = NULL;
	CPopup::m_gClip = NULL;
	CPopup::m_gBg = NULL;
	CPopup::m_bShow = false;
	m_bg = new Brush(Color(0,0,0));
	m_nWidth = 0;
	m_nHeight = 0;
	m_nPosX = 0;
	m_nPosY = 0;
}

CPopup::~CPopup(){
	Delete();
}

bool CPopup::Create(const CHAR * const pszFileName, const INT32 width, const INT32 height){
	bool bRet = false;

	m_nWidth = width;
	m_nHeight = height;

	if(CPopup::m_bmp_BgImg != NULL){
		delete CPopup::m_bmp_BgImg;
		CPopup::m_bmp_BgImg = NULL;
	}

	if(CPopup::m_gClip != NULL){
		delete CPopup::m_gClip;
		CPopup::m_gClip = NULL;
	}

	CPopup::m_gClip = new Graphics(height,width);
	CPopup::m_gBg = new Graphics(width,height);

	if(CPopup::m_gClip == NULL)	{
		bRet = false;
	}else{
		CPopup::m_bmp_BgImg = new Image(pszFileName);
		if(CPopup::m_bmp_BgImg == NULL){
			bRet = false;
		}else{
			bRet = true;
		}
	}
	return bRet;
}

void CPopup::Delete(){
	if(CPopup::m_bmp_BgImg != NULL){
		delete CPopup::m_bmp_BgImg;
		CPopup::m_bmp_BgImg = NULL;
	}

	if(CPopup::m_gClip != NULL)	{
		delete CPopup::m_gClip;
		CPopup::m_gClip = NULL;
	}
	if(CPopup::m_gBg != NULL)	{
		delete CPopup::m_gBg;
		CPopup::m_gBg = NULL;
	}
}

bool CPopup::IsPainted()const{
	return CPopup::m_bShow;
}

void CPopup::Show(Graphics * pDestDC, const U_INT32 x, const U_INT32 y){
	if((CPopup::m_gClip != NULL ) && (CPopup::m_bmp_BgImg != NULL)){

		m_nPosX = x;
		m_nPosY = y;

		CPopup::m_gClip->DrawLayer(m_bg, PointF(0,0), pDestDC, RectF(m_nPosX-m_nHeight+1,m_nPosY,m_nPosX,m_nPosY+m_nWidth) );
		printf("size = %d,%d / draw info %d , %d , %d , %d\n",m_nWidth,m_nHeight,m_nPosX-m_nHeight,m_nPosY,m_nPosX,m_nPosY+m_nWidth);

		m_gBg->DrawImage(m_bmp_BgImg, PointF(0,0));
		pDestDC->DrawRotateLayer(m_bg, PointF(m_nPosX, m_nPosY), m_gBg, RectF(0, 0, m_nWidth, m_nHeight), ROT_90);

		CPopup::m_bShow = true;
	}
}

void CPopup::Hide(Graphics * pDestDC){
	if((pDestDC != NULL) && (CPopup::m_gClip != NULL)){
		pDestDC->DrawLayer(m_bg, PointF(m_nPosX-m_nHeight+1,m_nPosY), m_gClip, RectF(0,0,m_nHeight,m_nWidth) );
		//		pDestDC->DrawLayer(m_bg, PointF(m_nPosX-m_nWidth,m_nPosY), m_gClip, RectF(0,0,m_nWidth,m_nHeight) );
		CPopup::m_bShow = false;
	}
}
