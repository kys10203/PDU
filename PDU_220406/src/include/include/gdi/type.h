#ifndef __TYPE_H__
#define __TYPE_H__

namespace Geminit {

typedef int INT;

typedef float REAL;

typedef char WCHAR;

typedef struct PointF {
	REAL X;
	REAL Y;

	PointF(): X(0.0f), Y(0.0f) {}
	PointF(REAL x, REAL y): X(x), Y(y) {}
} PointF;

typedef struct RectF {
	REAL X;
	REAL Y;
	REAL Width;
	REAL Height;

	RectF(): X(0.0f), Y(0.0f), Width(0.0f), Height(0.0f) {}
	RectF(REAL x, REAL y, REAL width, REAL height):
		X(x), Y(y), Width(width), Height(height) {}
} RectF;

typedef struct Color {
	INT a;
	INT r;
	INT g;
	INT b;

	Color(): a(255), r(0), g(0), b(0) {}
	Color(const Color &C): a(C.a), r(C.r), g(C.g), b(C.b) {}
	Color(INT R, INT G, INT B): a(255), r(R), g(G), b(B) {}
	Color(INT A, INT R, INT G, INT B): a(A), r(R), g(G), b(B) {}
} Color;

typedef enum StringHorizontalAlignment {
	StringHAlignmentLeft = 0,
	StringHAlignmentCenter = 1,
	StringHAlignmentRight = 2
} StringHorizontalAlignment;

typedef enum StringVerticalAlignment {
	StringVAlignmentTop = 0,
	StringVAlignmentCenter = 1,
	StringVAlignmentBottom = 2
} StringVerticalAlignment;

}

#endif
