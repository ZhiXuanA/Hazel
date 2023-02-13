#pragma once


#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HZ_API _declspec(dllexport)
	#else
		#define HZ_API _declspec(dllimport)
	#endif
#else
	#error Hazel not support	
#endif

#define BIT(x) (1 << x)
