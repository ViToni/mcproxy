#ifndef __OS_FREEBSD__H__
#define __OS_FREEBSD__H__

#ifdef __cplusplus
extern "C"
{
#endif

// map the FreeBSD structures to the linux definition
#ifdef __FreeBSD__
	#ifndef s6_addr16
		#define s6_addr16 __u6_addr.__u6_addr16
	#endif
	#ifndef s6_addr32
		#define s6_addr32 __u6_addr.__u6_addr32
	#endif
#endif

// linux uses different naming than *BSD
// see: http://markmail.org/message/bvqg3tzw4ilddsac#query:+page:1+mid:ptnxh67223ht3eae+state:results
#define IP_ROUTER_ALERT IPOPT_RA


// <netinet/igmp.h> uses lower case V for the version and has slightly different names
#define IGMP_V1_MEMBERSHIP_REPORT IGMP_v1_HOST_MEMBERSHIP_REPORT
#define IGMP_V2_MEMBERSHIP_REPORT IGMP_v2_HOST_MEMBERSHIP_REPORT
#define IGMP_V3_HOST_MEMBERSHIP_REPORT IGMP_v3_HOST_MEMBERSHIP_REPORT

#define IGMP_MEMBERSHIP_QUERY IGMP_HOST_MEMBERSHIP_QUERY
#define IGMP_V2_LEAVE_GROUP IGMP_HOST_LEAVE_MESSAGE


// for NBBY            8               /* number of bits per byte */
#include <sys/param.h>

// common includes
#include <arpa/inet.h>

#include <net/if.h>
#include <net/if_var.h>

#include <netinet/in.h>

// socket
#include <sys/socket.h>
#include <sys/sockio.h>

// IPv4
#include <netinet/ip.h>
#include <netinet/ip_compat.h>
#include <netinet/ip_mroute.h>

#include <netinet/igmp.h>

// IPv6
#include <netinet6/in6_var.h>
#include <netinet6/ip6_mroute.h>
#include <netinet/ip6.h>


#ifdef __cplusplus
} // extern "C"
#endif

#endif //  __OS_FREEBSD__H__
