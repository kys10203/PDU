#pragma once
typedef float			_f32;
typedef double			_f64;
typedef char 			_ch;
typedef char			_s8;
typedef short			_s16;
typedef int				_s32;
typedef unsigned char	_u8;
typedef unsigned short	_u16;
typedef unsigned int	_u32;

#include "MapConst.h"
#include "BaseType.h"

#pragma pack(1)
typedef struct _iPoint
{
	int				x;
	int				y;
	_iPoint() :x(0), y(0)
	{
	};
	_iPoint(int tx, int ty) :x(tx), y(ty)
	{
	};
	void setPoint(int tx, int ty)
	{
		x = tx; y = ty;
	};
	void setPoint(_iPoint pt)
	{
		x = pt.x; y = pt.y;
	};
	void Init()
	{
		x = 0;
		y = 0;
	};

#ifdef __FOR_WINDOWS
	Gdiplus::PointF getGdiPoint() const
	{
		Gdiplus::PointF gdiPoint;
#else
	PointF getGdiPoint() const
	{
		PointF gdiPoint;
#endif
		gdiPoint.X = (float)x;
		gdiPoint.Y = (float)y;
		return gdiPoint;
	}

} _iPoint;

typedef struct _iRect
{
	int				minX;
	int				minY;
	int				maxX;
	int				maxY;
	_iRect() :minX(0), minY(0), maxX(0), maxY(0)
	{
	};
	_iRect(int tminx, int tminy, int tmaxx, int tmaxy) :minX(tminx), minY(tminy), maxX(tmaxx), maxY(tmaxy)
	{
	};
	void setRect(int tminX, int tminY, int tmaxX, int tmaxY) { minX = tminX; minY = tminY; maxX = tmaxX; maxY = tmaxY; };
	void setRect(_iRect rect) { minX = rect.minX; minY = rect.minY; maxX = rect.maxX; maxY = rect.maxY; };
	int getWidth() const { return (maxX - minX); };
	int getHeight() const { return (maxY - minY); };
	_iPoint getCenterPoint() const
	{
		_iPoint	tmpPoint;
		tmpPoint.setPoint(minX + ((maxX - minX) / 2), minY + ((maxY - minY) / 2));
		return tmpPoint;
	};
	bool PtInRect(_iPoint pt) const
	{
		return ((pt.x <= maxX) && (pt.x >= minX) && (pt.y <= maxY) && (pt.y >= minY));
	};
	bool PtInRect(int x, int y) const
	{
		return ((x <= maxX) && (x >= minX) && (y <= maxY) && (y >= minY));
	};
	bool IntersectRect(_iRect& inRect) const
	{
		// To check if either rectangle is actually a line
		if (minX == maxX || minY == maxY || inRect.minX == inRect.maxX || inRect.minY == inRect.maxY)
		{
			// the line cannot have positive overlap
			return false;
		}

		// If one rectangle is on left side of other
		if (minX >= inRect.maxX || maxX <= inRect.minX)
			return false;

		// If one rectangle is above other
		if (minY >= inRect.maxY || maxY <= inRect.minY)
			return false;

		return true;
	}
	
} _iRect;

typedef struct _dPoint
{
	double				x;
	double				y;
	_dPoint() :x(0.0), y(0.0)
	{
	};
	_dPoint(double tx, double ty) :x(tx), y(ty)
	{
	};
	void setPoint(double tx, double ty)
	{
		x = tx; y = ty;
	};
	void setPoint(_dPoint pt)
	{
		x = pt.x; y = pt.y;
	};
	void Init()
	{
		x = 0.0;
		y = 0.0;
	};
} _dPoint;

typedef struct _dRect
{
	double				minX;
	double				minY;
	double				maxX;
	double				maxY;
	_dRect() :minX(0), minY(0), maxX(0), maxY(0)
	{
	};
	_dRect(double tminx, double tminy, double tmaxx, double tmaxy) :minX(tminx), minY(tminy), maxX(tmaxx), maxY(tmaxy)
	{
	};
	void setRect(double tminX, double tminY, double tmaxX, double tmaxY) { minX = tminX; minY = tminY; maxX = tmaxX; maxY = tmaxY; };
	void setRect(_dRect rect) { minX = rect.minX; minY = rect.minY; maxX = rect.maxX; maxY = rect.maxY; };
	double getWidth() const { return (maxX - minX); };
	double getHeight() const { return (maxY - minY); };
	_dPoint getCenterPoint() const
	{
		_dPoint	tmpPoint;
		tmpPoint.setPoint(minX + ((maxX - minX) / 2), minY + ((maxY - minY) / 2));
		return tmpPoint;
	};
	bool PtInRect(_dPoint pt) const
	{
		return ((pt.x <= maxX) && (pt.x >= minX) && (pt.y <= maxY) && (pt.y >= minY));
	};
	bool PtInRect(double x, double y) const
	{
		return ((x <= maxX) && (x >= minX) && (y <= maxY) && (y >= minY));
	};
	bool IntersectRect(_iRect& inRect) const
	{
		// To check if either rectangle is actually a line
		if (minX == maxX || minY == maxY || inRect.minX == inRect.maxX || inRect.minY == inRect.maxY)
		{
			// the line cannot have positive overlap
			return false;
		}

		// If one rectangle is on left side of other
		if (minX >= inRect.maxX || maxX <= inRect.minX)
			return false;

		// If one rectangle is above other
		if (minY >= inRect.maxY || maxY <= inRect.minY)
			return false;

		return true;
	}
} _dRect;


typedef struct _MapDrawInfo
{
	int		level;					// 논리적 레벨
	int		angle;					// Map Angle
	int		headingUpMode;			// 헤딩업 모드
	int		dayNightMode;			// 야간 모드
	_dPoint		mapCenterPos;		// 실제 Map Center Point
	_iPoint		lMapCenterPos;		// 논리 영역상 Map Center Point
	_iRect		drawRect;			// 논리 영역상 그려질 영역
	_iRect		devRect;			// Device Full Size
	_iPoint		devCenterPos;		// Device Center Point

	_MapDrawInfo() : level(0), angle(0), headingUpMode(MAP_CONST::MAP_MODE_HEADING::MAP_MODE_NORTH_UP),
		dayNightMode(MAP_CONST::MAP_MODE_DAYNIGHT::MAP_MODE_DAY) {};
	~_MapDrawInfo() {};
} _MapDrawInfo;

typedef struct _ScaleInfo
{
	/// <summary>
	/// 커버 영역의 좌하단 좌하단 경도 : 1/8초 단위 : 현재는 120도
	/// </summary>
	_s32		baseX;
	/// <summary>
	/// 커버 영역의 좌하단 좌하단 위도 : 1/8초 단위 : 현재는 32.7도
	/// </summary>
	_s32		baseY;
	/// <summary>
	/// 지도로 표시할 전체 커버 영역 : 현재 설정 경도(460800 (1/8초)) 16도
	/// </summary>
	_s32		width;	 
	/// <summary>
	/// 지도로 표시할 전체 커버 영역 : 현재 설정 위도(307200 (1/8초)) 약 10.7도
	/// </summary>
	_s32		height;
	/// <summary>
	/// 0레벨 기준 전체 지도를 포함할 X축 논리 영역 크기 : 현재 설정 4096
	/// </summary>
	const _f64		lWidth = 4096.;
	/// <summary>
	/// 0레벨 기준 전체 지도를 포함할 Y축 논리 영역 크기 : 현재 설정 4096
	/// </summary>
	const _f64		lHeight = 4096.;
	/// <summary>
	/// 도 단위 좌표를 8분초 단위 좌표로 변환하는 스케일값 : converting into degree, 28800 =  3600 * 8
	/// </summary>
	const _f64		UnitFactor = 28800.;
	/// <summary>
	/// 지도와 논리 영역간의 X축 스케일 비율
	/// </summary>
	_f64		scaleX;
	/// <summary>
	/// 지도와 논리 영역간의 Y축 스케일 비율
	/// </summary>
	_f64		scaleY;

	_ScaleInfo() : baseX(3456000), baseY(940800), width(460800), height(307200)
	{
		scaleX = lWidth / (double)width;
		scaleY = lHeight /(double)height;
	}

	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 다바이스 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inPoint"></param>
	void toDeviceScale(int level, _iPoint& inPoint) const 
	{
		if (level < 4)
		{
			inPoint.x <<= level;
			inPoint.y <<= level;
		}
		else
		{
			inPoint.x <<= (level - 1);
			inPoint.y <<= (level - 1);
			if (level == 4)
			{
				inPoint.x = (int)(inPoint.x * 1.4);
				inPoint.y = (int)(inPoint.y * 1.4);
			}
		}
	}
	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 디바이스 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inPoint"></param>
	void toDeviceScale(int level, _dPoint& inPoint) const
	{
		int scale = 1;
		if (level < 4)
		{
			scale <<= level;
		}
		else
		{
			scale <<= (level - 1);
		}
		inPoint.x = inPoint.x * scale;
		inPoint.y = inPoint.y * scale;
		if (level == 4)
		{
			inPoint.x = inPoint.x * 1.4;
			inPoint.y = inPoint.y * 1.4;
		}
	}
	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 디바이스 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inRect"></param>
	void toDeviceScale(int level, _iRect& inRect) const
	{
		if (level < 4)
		{
			inRect.minX <<= level;
			inRect.maxX <<= level;
			inRect.minY <<= level;
			inRect.maxY <<= level;
		}
		else
		{
			inRect.minX <<= (level - 1);
			inRect.maxX <<= (level - 1);
			inRect.minY <<= (level - 1);
			inRect.maxY <<= (level - 1);
			if (level == 4)
			{
				inRect.minX = (int)(inRect.minX * 1.4);
				inRect.maxX = (int)(inRect.maxX * 1.4);
				inRect.minY = (int)(inRect.minY * 1.4);
				inRect.maxY = (int)(inRect.maxY * 1.4);
			}
		}
	}
	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 디바이스 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inRect"></param>
	void toDeviceScale(int level, _dRect& inRect) const
	{
		int scale = 1;
		if (level < 4)
		{
			scale <<= level;
		}
		else
		{
			scale <<= (level - 1);
		}
		inRect.minX = inRect.minX * scale;
		inRect.maxX = inRect.maxX * scale;
		inRect.minY = inRect.minY * scale;
		inRect.maxY = inRect.maxY * scale;
		if (level == 4)
		{
			inRect.minX = inRect.minX * 1.4;
			inRect.maxX = inRect.maxX * 1.4;
			inRect.minY = inRect.minY * 1.4;
			inRect.maxY = inRect.maxY * 1.4;
		}
	}

	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 지도 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inPoint"></param>
	void toWorldScale(int level, _iPoint& inPoint) const
	{
		if (level < 4)
		{
			inPoint.x >>= level;
			inPoint.y >>= level;
		}
		else 
		{
			inPoint.x >>= (level - 1);
			inPoint.y >>= (level - 1);
			if (level == 4)
			{
				inPoint.x = (int)(inPoint.x * 1.4);
				inPoint.y = (int)(inPoint.y * 1.4);
			}
		}
	}
	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 지도 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inPoint"></param>
	void toWorldScale(int level, _dPoint& inPoint) const
	{
		int scale = 1;
		if (level < 4)
		{
			scale >>= level;
		}
		else
		{
			scale >>= (level - 1);
		}
		inPoint.x = inPoint.x * scale;
		inPoint.y = inPoint.y * scale;
		if (level == 4)
		{
			inPoint.x = inPoint.x * 1.4;
			inPoint.y = inPoint.y * 1.4;
		}
	}
	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 지도 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inRect"></param>
	void toWorldScale(int level, _iRect& inRect) const
	{
		if (level < 4)
		{
			inRect.minX >>= level;
			inRect.maxX >>= level;
			inRect.minY >>= level;
			inRect.maxY >>= level;
		}
		else
		{
			inRect.minX >>= (level - 1);
			inRect.maxX >>= (level - 1);
			inRect.minY >>= (level - 1);
			inRect.maxY >>= (level - 1);
			if (level == 4)
			{
				inRect.minX = (int)(inRect.minX * 1.4);
				inRect.maxX = (int)(inRect.maxX * 1.4);
				inRect.minY = (int)(inRect.minY * 1.4);
				inRect.maxY = (int)(inRect.maxY * 1.4);
			}
		}
	}
	/// <summary>
	/// 원점(0,0) 기준 레벨에 따른 지도 스케일 적용
	/// </summary>
	/// <param name="level"></param>
	/// <param name="inRect"></param>
	void toWorldScale(int level, _dRect& inRect) const
	{
		int scale = 1;
		if (level < 4)
		{
			scale >>= level;
		}
		else
		{
			scale >>= (level - 1);
		}
		inRect.minX = inRect.minX * scale;
		inRect.maxX = inRect.maxX * scale;
		inRect.minY = inRect.minY * scale;
		inRect.maxY = inRect.maxY * scale;
		if (level == 4)
		{
			inRect.minX = inRect.minX * 1.4;
			inRect.maxX = inRect.maxX * 1.4;
			inRect.minY = inRect.minY * 1.4;
			inRect.maxY = inRect.maxY * 1.4;
		}
	}

	bool isInMap(_dPoint inPoint)
	{
		double minX = baseX / 28800.;
		double maxX = (baseX + width) / 28800.;
		double minY = baseY / 28800.;
		double maxY = (baseY + height) / 28800.;
		return !((inPoint.x < minX) || (inPoint.x > maxX) || (inPoint.y < minY) || (inPoint.y > maxY));
	}
} _ScaleInfo;

typedef union _ImageCode
{
	_u32				data;
	struct
	{
		_u32			yPos : 8;
		_u32			xPos : 8;
		_u32			Idx : 16;
	} Info;

	_ImageCode() :data(0)
	{
	};
	void initData()
	{
		data = 0;
	};

} _ImageCode;

typedef struct _FontStyleRecord
{
	_u8					size;
	_u8					effect;
	_u32				color;
	char				fontName[MAP_CONST::MAX_TEXT_LENGTH];			// Font Table

	_FontStyleRecord() :size(0), effect(0), color(0)
	{
		memset(fontName, 0, MAP_CONST::MAX_TEXT_LENGTH);
	};
	void initData()
	{
		size = 0;
		effect = 0;
		color = 0;
		memset(fontName, 0, MAP_CONST::MAX_TEXT_LENGTH);
	};
} _FontStyleRecord;

typedef struct _PointInfo
{
	_u8					PtType;
	_u8					TxtPosition;
	_u16				SymAngle;
	_ImageCode			SymCode;

	_PointInfo() : PtType(0), TxtPosition(0), SymAngle(0)
	{
	};
	void initData()
	{
		PtType = 0;
		TxtPosition = 0;
		SymAngle = 0;
		SymCode.initData();
	};
} _PointInfo;

typedef struct _LineInfo
{
	_u8					type;
	_u8					width;
	_u32				color;

	_LineInfo() :type(0), width(0), color(0)
	{
	};
	void initData()
	{
		type = 0;
		width = 0;
		color = 0;
	};
} _LineInfo;

typedef struct _BrushInfo
{
	_u8					type;
	_ImageCode			fillValue;		// if Pattern ==> Pattern Index else if RGB ==> COLORREF

	_BrushInfo() :type(0)
	{
	};
	void initData()
	{
		type = 0;
		fillValue.initData();
	};
} _BrushInfo;

typedef struct _DesignRecord
{
	_u8					useFlag;		// Project Using O:N, 1:U
	_u8					visible;		// if visible(0) ==> Not Draw else Draw
	_u8					objType;		// Point, Line, Polygon
	_u16				order;			// Draw Order : 0x0000(First Draw), 0xffff(Last Draw)	
	_u32				designCode;		// Design Code
	_PointInfo			_point[2];
	_LineInfo			_line[2];
	_BrushInfo			_brush[2];
	_FontStyleRecord	_fontStyle[2];		// Style Code <Font Information>

	_DesignRecord() :visible(0), order(0), designCode(0), objType(0), useFlag(0)
	{
	};
	void initData()
	{
		visible = 0;
		order = 0;
		designCode = 0;
		objType = 0;
		useFlag = 0;
		for (long idx = 0; idx < 2; idx++)
		{
			_point[idx].initData();
			_line[idx].initData();
			_brush[idx].initData();
			_fontStyle[idx].initData();
		}
	};
} _DesignRecord;


typedef union _MapCode
{
	_ch			codeArray[MAP_CONST::MAP_CODE_LENGTH];
	_s32		codeValue[MAP_CONST::MAP_CODE_INDEX::INDEX_COUNT];

	_MapCode()
	{
		codeValue[MAP_CONST::MAP_CODE_INDEX::MAJOR_CODE] = 0;
		codeValue[MAP_CONST::MAP_CODE_INDEX::MINOR_CODE] = 0;
	};

} _MapCode;

typedef struct _MapRecordHeader
{
	_MapCode	objCode;
	//_s32		isVisible;			// PDU 버전에는 존재 : 샘플 데이터에는 미존재
	_s32		designCode;
	_s32		objType;
	_s32		pointCount;
	_s32		drawOrder;
	_iRect		boundaryRect;
	_ch			textLayerDes[32];
	_ch			textData[32];
	//_ch			textData2[32];	// PDU 버전에는 존재 : 샘플 데이터에는 미존재
	//_s32		textCount;			// PDU 버전에는 존재 : 샘플 데이터에는 미존재

	_MapRecordHeader() : designCode(0), objType(0), pointCount(0), drawOrder(0)//, textCount(0), isVisible(TRUE)
	{
		memset(&textData, 0, sizeof(textData));
		//memset(&textData2, 0, sizeof(textData2));
		memset(&textLayerDes, 0, sizeof(textLayerDes));
	};

} _MapRecordHeader;

typedef struct _MapRecord
{
	_MapRecordHeader	header;
	_iPoint* pointList;
	std::string layerName;
	std::string textData;

	_MapRecord() : pointList(NULL) { };
	_MapRecord(_MapRecordHeader inHeader) : pointList(NULL)
	{
		header = inHeader;
	}
	~_MapRecord()
	{
		delete []pointList;
	}

	void getBuffer(_u32 bufferSize)
	{
		// 이전에 생성된 메모리 해제
		delete []pointList;
		pointList = new _iPoint[bufferSize];
	}

	void releaseBuffer()
	{
		delete []pointList;
	}
} _MapRecord;

#pragma pack()