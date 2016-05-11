#ifndef __OS_LINUX_h__
#define __OS_LINUX_h__

#ifdef __cplusplus
extern "C"
{
#endif


#include <linux/types.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <arpa/inet.h>

#include <sys/ioctl.h>
#include <net/if.h>

#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/igmp.h>

#include <netinet/icmp6.h>
#include <netinet/ip6.h>

#include <linux/mroute.h>
#include <linux/mroute6.h>


#ifdef __cplusplus
} // extern "C"
#endif

#endif // __OS_LINUX_h__

