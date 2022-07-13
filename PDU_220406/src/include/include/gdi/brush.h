#ifndef __BRUSH_H__
#define __BRUSH_H__

#include "type.h"

namespace Geminit {

class Brush
{
	public:
		Brush(const Color &color);
		Brush(const Color &_color, INT _hatch_style);
		void SetColor(const Color &_color);
		void SetAlpha(INT _alpha);
		void SetHatchStyle(INT _hatch_style);
};

}

#endif
