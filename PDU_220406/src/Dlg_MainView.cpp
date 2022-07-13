#include "Dlg_MainView.h"
#include "include/IMapDrawEngine.h"
#include "include/MapDrawLib.h"
#include "app.h"

IMapDrawEngine *mapDrawEngine;

using namespace Geminit;

static int _dayNightMode = MAP_CONST::MAP_MODE_DAYNIGHT::MAP_MODE_DAY;
static int _headingupMode = MAP_CONST::MAP_MODE_HEADING::MAP_MODE_NORTH_UP;

static _dPoint _carPos(126.92159066179713, 37.52604360124937);
static _iPoint _deviceCenter(240, 460);

CDlgMainView::CDlgMainView() {
}

CDlgMainView::~CDlgMainView() {

}

void CDlgMainView::Hide(Graphics *pScreenDC) {

}

//void CDlgMainView::Show(Graphics * pScreenDC){
//
//	m_fTitle_18 = new Font("times", 18);
//
//	m_cWhite = new Color(255,255,255);
//	m_cGray = new Color(221,221,221);
//	m_cBlack = new Color(0,0,0);
//	m_bBackground_white = new Brush(*m_cWhite);
//	m_bBackground_black = new Brush(*m_cBlack);
//	m_bBackground_gray = new Brush(*m_cGray);
//
//	m_bmp_SkyViewTab = new Image("res/0_title_bg_0.bmp");
//	m_bmp_Title1 = new Image("res/0_title_bg_1.bmp");
//	m_bmp_Title2 = new Image("res/0_title_bg_2.bmp");
//
//	m_bmp_AirCraft = new Image("res/0_title_air_3.bmp");
//	m_bmp_Battery = new Image("res/0_title_img_0.bmp");
//	m_bmp_GPSAmp = new Image("res/0_title_img_6.bmp");
//	m_bmp_Platform_Station_1 = new Image("res/0_title_img_9.bmp");
//	m_bmp_Platform_Status = new Image("res/0_M_0.bmp");
//
//	m_bmp_ZoomIn = new Image("res/0_btn_map_2_0.bmp");
//	m_bmp_ZoomOut = new Image("res/0_btn_map_3_0.bmp");
//	m_bmp_HeadUP = new Image("res/0_btn_map_1_0.bmp");
//
//	m_gSkyView = new Graphics(480, 81);
//	m_gTitle1 = new Graphics(480, 80);
//	m_gTitle2 = new Graphics(480, 80);
//	m_gTitle1Text = new Graphics(480, 50);
//
//	m_gBattery = new Graphics(47, 27);
//	m_gGPSAmp = new Graphics(50, 34);
//	m_gAirCraft = new Graphics(160, 79);
//	m_gAIRCRAFT_ID = new Graphics(60, 27);
//	m_gAFB = new Graphics(160, 79);
//
//	m_gPlatform_Station_1 = new Graphics(34, 34);
//	m_gPlatform_Status = new Graphics(145, 25);
//
//	m_gZoomIn = new Graphics(78, 63);
//	m_gZoomOut = new Graphics(78, 63);
//	m_gHeadUp = new Graphics(78, 63);
//
//	m_gSkyView->DrawImage(m_bmp_SkyViewTab, PointF(0, 0));
//	m_gTitle1->DrawImage(m_bmp_Title1, PointF(0, 0));
//	m_gTitle2->DrawImage(m_bmp_Title2, PointF(0, 0));
//
//	m_gAirCraft->DrawImage(m_bmp_AirCraft, PointF(0, 0));
//	m_gBattery->DrawImage(m_bmp_Battery, PointF(0, 0));
//	m_gGPSAmp->DrawImage(m_bmp_GPSAmp, PointF(0, 0));
//
//	m_gPlatform_Station_1->DrawImage(m_bmp_Platform_Station_1, PointF(0, 0));
//	m_gPlatform_Status->DrawImage(m_bmp_Platform_Status, PointF(0, 0));
//	m_gZoomIn->DrawImage(m_bmp_ZoomIn, PointF(0, 0));
//	m_gZoomOut->DrawImage(m_bmp_ZoomIn, PointF(0, 0));
//	m_gHeadUp->DrawImage(m_bmp_HeadUP, PointF(0, 0));
//
//	clip = new Graphics(100, 100);
//
//	pScreenDC->FillRectangle(m_bBackground_black, RectF(0, 0, 800, 480));
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(799, 0), m_gSkyView, RectF(0, 0, 480, 81), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(720, 0), m_gTitle1, RectF(0, 0, 480, 81), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(640, 0), m_gTitle2, RectF(0, 0, 480, 81), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_white, PointF(790, 100), m_gBattery, RectF(0, 0, 47, 27), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(760, 100), m_gGPSAmp, RectF(0, 0, 50, 34), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(799, 160), m_gAirCraft, RectF(0, 0, 160, 79), ROT_90);
//	pScreenDC->DrawImage(m_bmp_Platform_Station_1, PointF(730, 160));
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(755, 325), m_gPlatform_Status, RectF(0, 0, 145, 25), ROT_90);
//
//	CHAR *str = "INV";
//
//	m_cAFB = "AFB 11";
//	m_cAIRCRAFT_ID = "# 128";
//
//	m_gAIRCRAFT_ID->FillRectangle(m_bBackground_white, RectF(0, 0, 60, 27));
//	m_gAIRCRAFT_ID->DrawString(m_cAIRCRAFT_ID, -1, m_fTitle_18, PointF(0, 25), m_bBackground_black);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(799, 260), m_gAIRCRAFT_ID, RectF(0, 0, 60, 27), ROT_90);
//
//	m_gAFB->FillRectangle(m_bBackground_gray, RectF(0, 0, 110, 35));
//	m_gAFB->DrawString(m_cAFB, -1, m_fTitle_18, PointF(10, 25), m_bBackground_black);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(635, 125), m_gAFB, RectF(0, 0, 110, 35), ROT_90);
//
//	m_gTitle1Text->FillRectangle(m_bBackground_gray, RectF(0, 0, 118, 38));
//	m_gTitle1Text->DrawString(str, -1, m_fTitle_18, PointF(60, 25), m_bBackground_black);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(719, 0), m_gTitle1Text, RectF(0, 0, 118, 38), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(719, 120), m_gTitle1Text, RectF(0, 0, 118, 38), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(719, 240), m_gTitle1Text, RectF(0, 0, 118, 38), ROT_90);
//	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(719, 360), m_gTitle1Text, RectF(0, 0, 118, 38), ROT_90);
//
//	CreateMapView(pScreenDC);
//}

void CDlgMainView::Show(Graphics *pScreenDC) {

	m_gMainView_Buf = new Graphics(480, 800);
	clip = new Graphics(480, 800);
	m_fTitle_18 = new Font("DIGIT", 18);

	m_cWhite = new Color(255, 255, 255);
	m_cGray = new Color(221, 221, 221);
	m_cBlack = new Color(0, 0, 0);
	m_bBackground_white = new Brush(*m_cWhite);
	m_bBackground_black = new Brush(*m_cBlack);
	m_bBackground_gray = new Brush(*m_cGray);

	m_pMainMenu = new CPopup();
	m_pMainMenu->Create("res/1_main_menu.bmp", 480, 72);

	m_bmp_SkyViewTab = new Image("res/0_title_bg_0.bmp");
	m_bmp_Title1 = new Image("res/0_title_bg_1.bmp");
	m_bmp_Title2 = new Image("res/0_title_bg_2.bmp");

	m_bmp_AirCraft = new Image("res/0_title_air_3.bmp");
	m_bmp_Battery = new Image("res/0_title_img_0.bmp");
	m_bmp_GPSAmp = new Image("res/0_title_img_6.bmp");
	m_bmp_Platform_Station_1 = new Image("res/0_title_img_9.bmp");
	m_bmp_Platform_Status = new Image("res/0_M_0.bmp");

	m_bmp_ZoomIn = new Image("res/0_btn_map_2_0.bmp");
	m_bmp_ZoomOut = new Image("res/0_btn_map_3_0.bmp");
	m_bmp_HeadUP = new Image("res/0_btn_map_1_0.bmp");

	m_bmp_MenuOpen = new Image("res/0_menu_open.bmp"); //*//

	m_gMainView_Buf->DrawImage(m_bmp_SkyViewTab, PointF(0, 0));
	m_gMainView_Buf->DrawImage(m_bmp_Title1, PointF(0, 79));
	m_gMainView_Buf->DrawImage(m_bmp_Title2, PointF(0, 159));

	m_gMainView_Buf->DrawImage(m_bmp_Battery, PointF(100, 45));
	m_gMainView_Buf->DrawImage(m_bmp_GPSAmp, PointF(100, 0));
	m_gMainView_Buf->DrawImage(m_bmp_AirCraft, PointF(160, 0));
	m_gMainView_Buf->DrawImage(m_bmp_Platform_Station_1, RectF(160, 40, 34, 34),
			RectF(0, 0, 34, 34), Color(255, 0, 255));

	pScreenDC->DrawRotateLayer(m_bBackground_white, PointF(799, 0),
			m_gMainView_Buf, RectF(0, 0, 480, 799), ROT_90);

	CreateMapView(pScreenDC);
}

void CDlgMainView::RedrawComponents() {
	printf("RedrawComponents #1");

	mapG->DrawImage(m_bmp_ZoomIn, PointF(0, 226));
	mapG->DrawImage(m_bmp_ZoomOut, PointF(0, 163));
	mapG->DrawImage(m_bmp_HeadUP, PointF(0, 100));
	mapG->DrawImage(m_bmp_MenuOpen, PointF(215, 525));// Draw m_bmp_MenuOpen(50, 35) in the middle bottom of mapG(480, 560)
}

void CDlgMainView::CreateMapView(Graphics *pScreenDC) {
	printf("CreateMapView #1");
	m_nMapX = 480;
	m_nMapY = 560;

	mapG = new Graphics(m_nMapX, m_nMapY);

	mapDrawEngine = GetMapDrawEngine();
	mapDrawEngine->Init("/home/root/data");
	mapDrawEngine->SetMapAngle(15);
	mapDrawEngine->SetDeviceCenter(_deviceCenter.x, _deviceCenter.y);
	mapDrawEngine->SetDeviceRect(m_nMapX, m_nMapY);
	mapDrawEngine->SetLevel(3);

	mapDrawEngine->SetMapPoint(37.52604360124937, 126.92159066179713);//37.52604360124937, 126.92159066179713 : 여의도공원 8분초 : x28800 : 1080750, 3655341
	mapDrawEngine->SetCarPos(_carPos);
	mapDrawEngine->SetHomePos(35.12569, 126.81239);

	mapDrawEngine->SetHeadingupMode(_headingupMode);
	mapDrawEngine->SetDayNightMode(_dayNightMode);
	(void) mapDrawEngine->Redraw(mapG, false);
	RedrawComponents();
	pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(560, 0), mapG,
			RectF(0, 0, m_nMapX, m_nMapY), ROT_90);
}

void CDlgMainView::OnTouchPress(Graphics *pScreenDC, INT32 pX, INT32 pY) {
	printf("Main View Touch x = %d , y = %d\n", pX, pY);

	if (m_pMainMenu->IsPainted()) {
		if ((pX >= 25) && (pX <= 97) && (pY >= 0) && (pY <= 100)) {
			printf("LogOut \n");
			g_pLoginView = new CDlgLoginView();
			if (g_pLoginView != NULL) {
				g_pApp->ChangeView(g_pLoginView, this, 300);
			}
		} else {
			m_pMainMenu->Hide(pScreenDC);
			if ((pX >= 25) && (pX <= 97) && (pY >= 121) && (pY <= 200)) {
				printf("Misson \n");
			} else if ((pX >= 25) && (pX <= 97) && (pY >= 201) && (pY <= 300)) {
				printf("Day/Night \n");
			} else if ((pX >= 25) && (pX <= 97) && (pY >= 301) && (pY <= 400)) {
				printf("Brightness \n");
			} else if ((pX >= 25) && (pX <= 97) && (pY >= 401) && (pY <= 500)) {
				printf("MenuClose \n");
			}
		}
	} else	// m_pMainMenu->IsPainted() == TRUE;
	{
		if ((pX >= 30) && (pX <= 450) && (pY >= 10) && (pY <= 530)) {
			if ((pX >= 310) && (pX <= 350) && (pY >= 10) && (pY <= 55)) {
				printf("ZoomIn \n");
				if (mapDrawEngine->ZoomIn()) {
					(void) mapDrawEngine->Redraw(mapG, true);
					RedrawComponents();
					pScreenDC->DrawRotateLayer(m_bBackground_black,
							PointF(560, 0), mapG, RectF(0, 0, m_nMapX, m_nMapY),
							ROT_90);
				}
			} else if ((pX >= 370) && (pX <= 410) && (pY >= 10) && (pY <= 55)) {
				printf("ZoomOut \n");
				if (mapDrawEngine->ZoomOut()) {
					(void) mapDrawEngine->Redraw(mapG, true);
					RedrawComponents();
					pScreenDC->DrawRotateLayer(m_bBackground_black,
							PointF(560, 0), mapG, RectF(0, 0, m_nMapX, m_nMapY),
							ROT_90);
				}
			} else if ((pX >= 430) && (pX <= 470) && (pY >= 10)
					&& (pY <= 220)) {
				printf("HeadUp \n");
			} else if ((pX >= 25) && (pX <= 60) && (pY >= 215) && (pY <= 265)) {
				printf("MenuOpen \n");
				m_pMainMenu->Show(pScreenDC, 72, 0);
			} else {

				INT32 tmp = 530 - pX;

				//printf("pY = %d , change = %d\n",pY,tmp);

				auto mapRect = mapDrawEngine->GetDeviceRect();
				auto mapRectCenter = mapRect.getCenterPoint();
				//mapDrawEngine->MoveDevicePoint(_iPoint(pX,pY), mapRectCenter);
				mapDrawEngine->MoveDevicePoint(_iPoint(pY, tmp), mapRectCenter);
				(void) mapDrawEngine->Redraw(mapG, true);
				RedrawComponents();
				pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(560, 0),
						mapG, RectF(0, 0, m_nMapX, m_nMapY), ROT_90);
			}
		}
		if ((pX >= 719) && (pX <= 800) && (pY >= 0) && (pY <= 160)) {
			printf("GPS View \n");
			g_pGPSView = new CDlgGPSView();
			if (g_pGPSView != NULL) {
				g_pApp->ChangeView(g_pGPSView, this, 300);
			}
		}
	}
}
void CDlgMainView::ZoomIn() {

}

void CDlgMainView::ZoomOut() {

}

void CDlgMainView::Move(Graphics *pScreenDC) {
	double lat = 0.;
	double lon = 0.;

	std::cout << "Latitude (37.32): ";
	std::cin >> lat;
	std::cout << "Longitude (126.56): ";
	std::cin >> lon;

	mapDrawEngine->SetCarPos(lat, lon);
	if (mapDrawEngine->SetMapPoint(lat, lon)) {
		mapDrawEngine->Redraw(mapG, true);
		//DrawImmu(mapG, mapDrawEngine);
		pScreenDC->DrawRotateLayer(m_bBackground_black, PointF(640, 0), mapG,
				RectF(0, 0, 480, 560), ROT_90);
	}
}

void CDlgMainView::dMove() {

}

