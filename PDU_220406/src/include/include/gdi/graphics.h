#ifndef __GRAPHICS_H__
#define __GRAPHICS_H__

#include "type.h"
#include "pen.h"
#include "brush.h"
#include "font.h"
#include "string_format.h"
#include "hatch_brush.h"
#include "image.h"

namespace Geminit {

#define ROT_90	1
#define ROT_180	2
#define ROT_270	3

class Graphics
{
	public:
		Graphics(const char *fb_name);
		Graphics(INT width, INT height);
		~Graphics();

		void SetPixel(const Pen *pen, INT x, INT y);
		void SetPixel(const Pen *pen, const PointF &pt);

		void DrawLine(const Pen *pen, INT x1, INT y1, INT x2, INT y2);
		void DrawLine(const Pen *pen, const PointF &pt1, const PointF &pt2);

		void DrawLines(const Pen *pen, const PointF *points, INT count);

		void DrawPolygon(const Pen *pen, const PointF *points, INT count);
		void FillPolygon(const Brush *brush, const PointF *points, INT count);
		void FillPolygon(const HatchBrush *hatch_brush, const PointF *points, INT count);

		void DrawRectangle(const Pen *pen, INT x, INT y, INT width, INT height);
		void DrawRectangle(const Pen *pen, const RectF &rect);
		void FillRectangle(const Brush *brush, INT x, INT y, INT width, INT height);
		void FillRectangle(const Brush *brush, const RectF &rect);

		void DrawEllipse(const Pen *pen, INT x, INT y, INT width, INT height);
		void DrawEllipse(const Pen *pen, const RectF &rect);
		void FillEllipse(const Brush *brush, INT x, INT y, INT width, INT height);
		void FillEllipse(const Brush *brush, const RectF &rect);

		void DrawString(const WCHAR *string, INT length, const Font *font, const PointF& origin, const Brush *brush);
		void DrawString(const WCHAR *string, INT length, const Font *font, const RectF &layoutRect, const StringFormat *stringFormat, const Brush *brush);
		void DrawImage(Image *image, const PointF &point);
		void DrawImage(Image *image, const RectF &dstRect, const RectF &srcRect, const Color &mask);

		///layer의 rect영역을 자신의 dst(좌측상단 위치임) 위치의 위에 그린다.
		void DrawLayer(const Brush *brush, const PointF &dst, Graphics *layer, const RectF &rect);
		void DrawRotateLayer(const Brush *brush, const PointF &dst, Graphics *layer, const RectF &rect, int rotation_angle);
};

}

#endif
