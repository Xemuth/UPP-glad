#ifndef _plugin_glad_Glad_h_
#define _plugin_glad_Glad_h_
#include "include/glad/glad.h"
#if defined(GUI_X11) || defined(GUI_GTK)
//#include "include/glad/glad_glx.h"
#elif defined(PLATFORM_WIN32)
#include "include/glad/glad_wgl.h"
#endif
#endif
