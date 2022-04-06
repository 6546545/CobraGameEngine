#pragma once

//This file defines all the MACROS needed to start the entry point function

//If not Windows, then Throw error
#ifdef CB_PLATFORM_WINDOWS
	//CB_BUILD_DLL is a macro
	#ifdef CB_BUILD_DLL
		#define COBRA_API __declspec(dllexport)
	#else
		#define COBRA_API __declspec(dllimport)
	#endif
#else
	#error Cobra only supports Windows!
#endif
