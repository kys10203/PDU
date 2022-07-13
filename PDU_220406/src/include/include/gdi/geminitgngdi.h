#ifndef __GEMINITGNGDI_H__
#define __GEMINITGNGDI_H__

extern "C" {

#include "graphics.h"
#include "brush.h"
#include "hatch_brush.h"
#include "font.h"
#include "image.h"
#include "pen.h"
#include "type.h"

namespace Geminit {

/* API { */
Pen CreatePen(INT _style, REAL _width, const Color &_color);
HatchBrush CreateHatchBrush(INT _style, const Color &_color);
HatchBrush CreatePatternBrush(INT _style, const Color &_color);
/* } */

Pen CreatePen(INT _style, REAL _width, const Color &_color)
{
	return Pen(_color, _width, _style);
}
HatchBrush CreateHatchBrush(INT _style, const Color &_color)
{
	return HatchBrush(_style, _color, Color(255, 255, 255));
}
HatchBrush CreatePatternBrush(INT _style, const Color &_color)
{
	return HatchBrush(_style, _color, Color(255, 255, 255));
}

}

}

#endif

