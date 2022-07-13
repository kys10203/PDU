#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <string.h>

#ifdef __FOR_WINDOWS	
	#include <Windows.h>
	#include <objidl.h>
	#include <gdiplus.h>	
#else
	#include "./gdi/geminitgngdi.h"
#endif