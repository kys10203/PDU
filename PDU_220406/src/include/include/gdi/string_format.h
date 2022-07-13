#ifndef __STRING_FORMAT_H__
#define __STRING_FORMAT_H__

#include "type.h"

namespace Geminit {

class StringFormat
{
	public:
		StringFormat();
		StringFormat(StringHorizontalAlignment _h_align, StringVerticalAlignment _v_align);
		void SetHorizontalAlignment(StringHorizontalAlignment _h_align);
		void SetVerticalAlignment(StringVerticalAlignment _v_align);
};

}

#endif
