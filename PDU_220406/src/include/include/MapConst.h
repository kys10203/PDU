#pragma

namespace MAP_CONST
{
	const _s32		MAX_TEXT_LENGTH = 64;
	const _s32		MAP_CODE_LENGTH = 8;	
	const _s32		BASE_PARCEL_GAP_X = 7200;
	const _s32		BASE_PARCEL_GAP_Y = 4800;
	const _s32		MAX_DESIGN_RECORD_COUNT = 1000;
	const _f64		PI_VALUE = 3.141592653589793238462643383279502884197169399375105820974944592308;

	namespace MAP_MODE_HEADING
	{
		const _s32		MAP_MODE_NORTH_UP = 0;				// 노스업
		const _s32		MAP_MODE_HEADING_UP = 1;			// 헤딩업
		const _s32		COUNT = 2;
	}

	namespace MAP_MODE_DAYNIGHT
	{
		const _s32		MAP_MODE_DAY = 0;				// 주간 모드
		const _s32		MAP_MODE_NIGHT = 1;				// 야간 모드
		const _s32		COUNT = 2;
	}

	namespace MAP_CODE_INDEX
	{
		const _s32		MINOR_CODE = 0;
		const _s32		MAJOR_CODE = 1;
		const _s32		INDEX_COUNT = 2;
	}

	namespace MAP_POSITION_INDEX
	{
		const _s32		LATITUDE = 0;
		const _s32		LONGITUDE = 1;
		const _s32		INDEX_COUNT = 2;
	}

	namespace SHAPE_OBJET_TYPE
	{
		const _s32 NONE = 0;
		const _s32 POINT = 1;
		const _s32 ARC = 3;
		const _s32 POLYGON = 5;
		const _s32 MULTIPOINT = 8;
		const _s32 POINTZ = 11;
		const _s32 ARCZ = 13;
		const _s32 POLYGONZ = 15;
		const _s32 MULTIPOINTZ = 18;
		const _s32 POINTM = 21;
		const _s32 ARCM = 23;
		const _s32 POLYGONM = 25;
		const _s32 MULTIPOINTM = 28;
		const _s32 MULTIPATCH = 31;
	}
}

namespace DESIGN_CONST
{
	// Default Enum Type Define
	namespace IMAGE_TYPE
	{
		const _u8 BMP = 0;
		const _u8 JPEG = 1;
		const _u8 PNG = 2;
	}

	namespace DRAW_TYPE
	{
		const _u8 POINT = 0;
		const _u8 POLYLINE = 1;
		const _u8 POLYGON = 2;

		namespace POINT_TYPE
		{
			const _u8 NONE = 0x00;
			const _u8 TEXT = 0x01;
			const _u8 SYMBOL = 0x02;

			namespace TEXT_POSITION
			{
				const _u8 LT = 0;
				const _u8 T = 1;
				const _u8 RT = 2;
				const _u8 L = 3;
				const _u8 C = 4;
				const _u8 R = 5;
				const _u8 LB = 6;
				const _u8 B = 7;
				const _u8 RB = 8;
			}

			namespace FONT_EFFECT
			{
				const _u8 NORMAL = 0x00;
				const _u8 BOLD = 0x01;
				const _u8 ITALIC = 0x02;
				const _u8 UNDERLINE = 0x04;
			}
		}

		namespace LINE_TYPE
		{
			const _u8 SOLID = 0;	// PS_SOLID			Creates a solid pen.
			const _u8 DASH = 1;	// PS_DASH			Creates a dashed pen. Valid only when the pen width is 1 or less, in device units.
			const _u8 DOT = 2;	// PS_DOT			Creates a dotted pen. Valid only when the pen width is 1 or less, in device units.
			const _u8 DASHDOT = 3;	// PS_DASHDOT		Creates a pen with alternating dashes and dots. Valid only when the pen width is 1 or less, in device units.
			const _u8 DASHDOTDOT = 4;	// PS_DASHDOTDOT	Creates a pen with alternating dashes and double dots. Valid only when the pen width is 1 or less, in device units.
			const _u8 NULLPEN = 5;	// PS_NULL			Creates a null pen.
		}

		namespace BRUSH_TYPE
		{
			const _u8 NULLBRUSH = 0x00;
			const _u8 SOLID_MASK = 0x10;
			const _u8 HATCH_MASK = 0x20;
			const _u8 PATTERN_MASK = 0x40;
			const _u8 SOLID = 0x11;
			const _u8 HATCH_HORIZONTAL = 0x21;		// HS_HORIZONTAL   Horizontal hatch
			const _u8 HATCH_VERTICAL = 0x22;		// HS_VERTICAL   Vertical hatch
			const _u8 HATCH_FDIAGONAL = 0x23;		// HS_FDIAGONAL   Upward hatch (left to right) at 45 degrees
			const _u8 HATCH_BDIAGONAL = 0x24;		// HS_BDIAGONAL   Downward hatch (left to right) at 45 degrees
			const _u8 HATCH_CROSS = 0x25;		// HS_CROSS   Horizontal and vertical crosshatch
			const _u8 HATCH_DIAGCROSS = 0x26;		// HS_DIAGCROSS   Crosshatch at 45 degrees				
			const _u8 PATTERN_BMP = 0x41;
			const _u8 PATTERN_JPEG = 0x42;
			const _u8 PATTERN_PNG = 0x43;
		}
	}
}