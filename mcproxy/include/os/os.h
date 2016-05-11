
#ifndef __OS_H__
#define __OS_H__


#ifdef __linux__
	#include "include/os/os-linux.h"
#elif defined( __FreeBSD__ )
	#include "include/os/os-freebsd.h"
// these are currently not implemented
//#elif defined( __NetBSD__ )
//	#include "include/os/os-netbsd.h"
//#elif defined( __OpenBSD__ )
//	#include "include/os/os-openbsd.h"
//#elif defined( __DragonFly__ )
//	#include "include/os/os-dragonfly.h"
//#elif defined( __bsdi__ )
//	#include "include/os/os-bsdi.h"
#else
	#error Unsupported OS!
#endif


#endif // __OS_H__
