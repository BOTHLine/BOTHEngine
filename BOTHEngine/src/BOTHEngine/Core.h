#pragma once

#ifdef BE_PLATFORM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define BOTHENGINE_API __declspec(dllexport)
	#else
		#define BOTHENGINE_API __declspec(dllimport)
	#endif
#else
	#error BOTHEngine only supports Windows!
#endif