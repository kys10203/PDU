#ifndef DLG_MAINVIEW_H_
#define DLG_MAINVIEW_H_


#include "include/include/gdi/graphics.h"
#include "popup.h"
#include "defList.h"
#include "Dlg_View.h"

using namespace Geminit;


class CDlgMainView  : public CDlgView
{
public:
	CDlgMainView();
	~CDlgMainView();
	CDlgMainView(const CDlgMainView& tcv):CDlgView(){ clip = tcv.clip;	}

public:

	Brush * m_bBackground_white;
	Brush * m_bBackground_gray;
	Brush * m_bBackground_black;

	Color * m_cBlack;
	Color * m_cWhite;
	Color * m_cGray;

	Font *m_fTitle_18;

	Graphics * m_gMainView_Buf;
	Graphics * m_gSkyView;
	Graphics * m_gTitle1;
	Graphics * m_gTitle2;
	Graphics * m_gTitle1Text;

	Graphics * clip;

	Graphics * m_gAirCraft;
	Graphics * m_gBattery;
	Graphics * m_gGPSAmp;

	Graphics * m_gAIRCRAFT_ID;
	Graphics * m_gAFB;

	Graphics * m_gPlatform_Station_1;
	Graphics * m_gPlatform_Status;

	Graphics * m_gZoomIn;
	Graphics * m_gZoomOut;
	Graphics * m_gHeadUp;

	Image * m_bmp_SkyViewTab;
	Image * m_bmp_Title1;
	Image * m_bmp_Title2;
	Image * m_bmp_Map;
	Image * m_bmp_AirCraft;
	Image * m_bmp_Battery;
	Image * m_bmp_GPSAmp;
	Image * m_bmp_Platform_Station_1;
	Image * m_bmp_Platform_Station_2;
	Image * m_bmp_Platform_Station_3;
	Image * m_bmp_Platform_Station_4;
	Image * m_bmp_Platform_Status;
	Image * m_bmp_ZoomIn;
	Image * m_bmp_ZoomOut;
	Image * m_bmp_HeadUP;

	Image* m_bmp_MenuOpen;
	Image* m_bmp_MainMenu;

	CPopup * m_pMainMenu;

	CHAR * m_cAFB, * m_cAIRCRAFT_ID;

	virtual void Show(Graphics * pScreenDC);
	virtual void Hide(Graphics * pScreenDC);
	virtual void OnTouchPress(Graphics * pScreenDC, INT32 pX, INT32 pY);

public:
	void RedrawComponents();
	void CreateMapView(Graphics * pScreenDC);


public:
	Graphics* mapG;
	INT32 m_nMapX, m_nMapY;

public:
	void ZoomIn();
	void ZoomOut();
	void dMove();
	void Move(Graphics * pScreenDC);

};

#endif /* DLG_MAINVIEW_H_ */
