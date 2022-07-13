#ifndef __HATCH_BRUSH_H__
#define __HATCH_BRUSH_H__

#include "type.h"

namespace Geminit {

#define HS_SOLID	0
#define HS_BDIAGONAL	1
#define HS_CROSS	2
#define HS_DIAGCROSS	3
#define HS_FDIAGONAL	4
#define HS_HORIZONTAL	5
#define HS_VERTICAL	6

class HatchBrush
{
	public:
		HatchBrush(INT _hatch_style, const Color &_fore_color, const Color &_back_color);
		void SetHatchStyle(INT _hatch_style);
		void SetForegroundColor(const Color &_color);
		void SetBackgroundColor(const Color &_color);
		void SetForegroundAlpha(INT _alpha);
		void SetBackgroundAlpha(INT _alpha);
};

}

#endif
