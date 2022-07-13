//#pragma once

#ifndef __IMAPDRAWENGINE_H__
#define __IMAPDRAWENGINE_H__

#include "include/MapType.h"
//#include "include/gdi/graphics.h"

class IMapDrawEngine
{
public:
	virtual ~IMapDrawEngine() {}

public:
	virtual std::string GetMapDataPath() const = 0;
	virtual std::string GetMapDesignFileName() const = 0;

	virtual int Init(std::string dataPath) = 0;
	virtual int Release() = 0;

	virtual int GetLevel() const = 0;
	/// <summary>
	/// 지도 확대 축소하기
	/// </summary>
	/// <param name="level">큰 값일 수록 확대 : 0~8 레벨까지 지원</param>
	/// <returns>레벨 변경 유무</returns>
	virtual bool SetLevel(int level) = 0;
	/// <summary>
	/// 확대하기
	/// </summary>
	/// <returns>레벨 변경 유무</returns>
	virtual bool ZoomIn() = 0;
	/// <summary>
	/// 축소하기
	/// </summary>
	/// <returns>레벨 변경 유무</returns>
	virtual bool ZoomOut() = 0;

	virtual int GetMapAngle() const = 0;
	virtual bool SetMapAngle(int angle) = 0;

	virtual int GetHeadingupMode() const = 0;
	/// <summary>
	/// 헤딩업 모드 설정
	/// </summary>
	/// <param name="mode">노스업(0), 헤딩업(1)</param>
	virtual bool SetHeadingupMode(int mode) = 0;

	virtual int GetDayNightMode() const = 0;
	/// <summary>
	/// 주야간 모드 설정
	/// </summary>
	/// <param name="mode">주간(0), 야간(1)</param>
	virtual bool SetDayNightMode(int mode) = 0;

	virtual _iRect GetDeviceRect() const = 0;
	virtual void SetDeviceRect(int width, int height) = 0;

	virtual _iPoint GetDeviceCenter() const = 0;
	virtual void SetDeviceCenter(int x, int y) = 0;

	virtual _dPoint GetMapPoint() const = 0;

	virtual _iPoint Rotate(_iPoint inPoint, _iPoint centerPoint, int angle) const = 0;
	virtual _dPoint RotateF(_dPoint inPoint, _dPoint centerPoint, int angle) const = 0;
	virtual _dPoint Device2World(_iPoint pt) const = 0;
	virtual _dPoint Device2WorldMove(_iPoint pt, _iPoint center) const = 0;
	virtual _iPoint World2Device(_dPoint pt) const = 0;
	virtual _iPoint World2Device(double lat, double lon) const = 0;
	/// <summary>
	/// 홉 위치 정보 조회
	/// </summary>
	/// <returns></returns>
	virtual _dPoint GetHomePos() const = 0;
	/// <summary>
	/// 홈 위치 정보
	/// </summary>
	/// <param name="pt">WGS-84 위경도 포인트 정보</param>
	/// <returns></returns>
	virtual void SetHomePos(_dPoint pt) = 0;
	/// <summary>
	/// 홈 위치 정보
	/// </summary>
	/// <param name="lat">WGS-84 위도</param>
	/// <param name="lon">WGS-84 경도</param>
	/// <returns></returns>
	virtual void SetHomePos(double lat, double lon) = 0;
	/// <summary>
	/// 비행기(차량)위치 정보 조회
	/// </summary>
	/// <returns></returns>
	virtual _dPoint GetCarPos() const = 0;
	/// <summary>
	/// 비행기(차량)위치 정보
	/// </summary>
	/// <param name="pt">WGS-84 위경도 포인트 정보</param>
	/// <returns></returns>
	virtual void SetCarPos(_dPoint pt) = 0;
	/// <summary>
	/// 비행기(차량)위치 정보
	/// </summary>
	/// <param name="lat">WGS-84 위도</param>
	/// <param name="lon">WGS-84 경도</param>
	/// <returns></returns>
	virtual void SetCarPos(double lat, double lon) = 0;
	/// <summary>
	/// 화면상의 좌표로 지도를 이동시킨다.
	/// </summary>
	/// <param name="point">이동할 디바이스 좌표</param>
	/// <param name="center">이동 중이었을 경우도 존해 하므로 임시 센터 좌표</param>
	virtual bool MoveDevicePoint(_iPoint point, _iPoint center) = 0;
	/// <summary>
	/// 디바이스 좌표 차이값 기준으로 이동
	/// </summary>
	/// <param name="dx">x축 변화량</param>
	/// <param name="dy">y축 변화량</param>
	virtual bool MoveDevicePointDelta(int dx, int dy) = 0;
	/// <summary>
	/// 지도 중심위치 정보 설정
	/// </summary>
	/// <param name="pt">WGS-84 위경도 포인트 정보</param>
	/// <returns></returns>
	virtual bool SetMapPoint(_dPoint pt) = 0;
	/// <summary>
	/// 지동 중심 위치 정보 설정
	/// </summary>
	/// <param name="lat">WGS-84 위도</param>
	/// <param name="lon">WGS-84 경도</param>
	/// <returns></returns>
	virtual bool SetMapPoint(double lat, double lon) = 0;

	/// <summary>
	/// 지도를 다시 그린다.
	/// </summary>
	/// <param name="graphics">그려질 객체</param>
	/// <param name="isPanning">패닝(이동) 모드 유무</param>
	/// <returns></returns>
#ifdef __FOR_WINDOWS	
	virtual int Redraw(Gdiplus::Graphics& graphics, bool isPanning = false) const = 0;
	virtual int DrawSymbol(Gdiplus::Graphics& graphics, int symbolType, _iPoint centerPoint, Gdiplus::Color  color, int lineSize, int angle = 0) const = 0;
#else
	virtual int Redraw(Graphics* graphics, bool isPanning = false) const = 0;
	virtual int DrawSymbol(Graphics* graphics, int symbolType, _iPoint centerPoint, Color  color, int lineSize, int angle = 0) const = 0;
#endif

};

#endif
