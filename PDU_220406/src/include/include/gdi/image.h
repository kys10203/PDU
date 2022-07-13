#ifndef __IMAGE_PRIV_H__
#define __IMAGE_PRIV_H__

#include "type.h"

using namespace std;

namespace Geminit {

class Image
{
	public:
		Image(const WCHAR *filename);
		void ImageClose();
};

}

#endif
