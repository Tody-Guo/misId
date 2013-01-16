/* soapStub.h
   Generated by gSOAP 2.8.9 from boardId.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20809
# error "GSOAP VERSION MISMATCH IN GENERATED CODE: PLEASE REINSTALL PACKAGE"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE__ns1__CheckSNtest
#define SOAP_TYPE__ns1__CheckSNtest (7)
/* ns1:CheckSNtest */
struct _ns1__CheckSNtest
{
	char *strSn;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__CheckSNtestResponse
#define SOAP_TYPE__ns1__CheckSNtestResponse (8)
/* ns1:CheckSNtestResponse */
struct _ns1__CheckSNtestResponse
{
	char *CheckSNtestResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__CheckSN
#define SOAP_TYPE__ns1__CheckSN (9)
/* ns1:CheckSN */
struct _ns1__CheckSN
{
	char *strSn;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__CheckSNResponse
#define SOAP_TYPE__ns1__CheckSNResponse (10)
/* ns1:CheckSNResponse */
struct _ns1__CheckSNResponse
{
	int CheckSNResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	int ret;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE__ns1__getSource
#define SOAP_TYPE__ns1__getSource (11)
/* ns1:getSource */
struct _ns1__getSource
{
	char *strSn;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__getSourceResponse
#define SOAP_TYPE__ns1__getSourceResponse (12)
/* ns1:getSourceResponse */
struct _ns1__getSourceResponse
{
	int ret;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	char *data;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__getSourceTest
#define SOAP_TYPE__ns1__getSourceTest (13)
/* ns1:getSourceTest */
struct _ns1__getSourceTest
{
	char *strSn;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__getSourceTestResponse
#define SOAP_TYPE__ns1__getSourceTestResponse (14)
/* ns1:getSourceTestResponse */
struct _ns1__getSourceTestResponse
{
	char *getSourceTestResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__updateM2
#define SOAP_TYPE__ns1__updateM2 (15)
/* ns1:updateM2 */
struct _ns1__updateM2
{
	char *serial_USCOREnumber;	/* optional element of type xsd:string */
	char *m2_USCOREboard_USCOREid;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__updateM2Response
#define SOAP_TYPE__ns1__updateM2Response (16)
/* ns1:updateM2Response */
struct _ns1__updateM2Response
{
	int updateM2Result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	int ret;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE___ns2__CheckSNtest
#define SOAP_TYPE___ns2__CheckSNtest (20)
/* Operation wrapper: */
struct __ns2__CheckSNtest
{
	struct _ns1__CheckSNtest *ns1__CheckSNtest;	/* optional element of type ns1:CheckSNtest */
};
#endif

#ifndef SOAP_TYPE___ns2__CheckSN
#define SOAP_TYPE___ns2__CheckSN (24)
/* Operation wrapper: */
struct __ns2__CheckSN
{
	struct _ns1__CheckSN *ns1__CheckSN;	/* optional element of type ns1:CheckSN */
};
#endif

#ifndef SOAP_TYPE___ns2__getSource
#define SOAP_TYPE___ns2__getSource (28)
/* Operation wrapper: */
struct __ns2__getSource
{
	struct _ns1__getSource *ns1__getSource;	/* optional element of type ns1:getSource */
};
#endif

#ifndef SOAP_TYPE___ns2__getSourceTest
#define SOAP_TYPE___ns2__getSourceTest (32)
/* Operation wrapper: */
struct __ns2__getSourceTest
{
	struct _ns1__getSourceTest *ns1__getSourceTest;	/* optional element of type ns1:getSourceTest */
};
#endif

#ifndef SOAP_TYPE___ns2__updateM2
#define SOAP_TYPE___ns2__updateM2 (36)
/* Operation wrapper: */
struct __ns2__updateM2
{
	struct _ns1__updateM2 *ns1__updateM2;	/* optional element of type ns1:updateM2 */
};
#endif

#ifndef SOAP_TYPE___ns3__CheckSNtest
#define SOAP_TYPE___ns3__CheckSNtest (38)
/* Operation wrapper: */
struct __ns3__CheckSNtest
{
	struct _ns1__CheckSNtest *ns1__CheckSNtest;	/* optional element of type ns1:CheckSNtest */
};
#endif

#ifndef SOAP_TYPE___ns3__CheckSN
#define SOAP_TYPE___ns3__CheckSN (40)
/* Operation wrapper: */
struct __ns3__CheckSN
{
	struct _ns1__CheckSN *ns1__CheckSN;	/* optional element of type ns1:CheckSN */
};
#endif

#ifndef SOAP_TYPE___ns3__getSource
#define SOAP_TYPE___ns3__getSource (42)
/* Operation wrapper: */
struct __ns3__getSource
{
	struct _ns1__getSource *ns1__getSource;	/* optional element of type ns1:getSource */
};
#endif

#ifndef SOAP_TYPE___ns3__getSourceTest
#define SOAP_TYPE___ns3__getSourceTest (44)
/* Operation wrapper: */
struct __ns3__getSourceTest
{
	struct _ns1__getSourceTest *ns1__getSourceTest;	/* optional element of type ns1:getSourceTest */
};
#endif

#ifndef SOAP_TYPE___ns3__updateM2
#define SOAP_TYPE___ns3__updateM2 (46)
/* Operation wrapper: */
struct __ns3__updateM2
{
	struct _ns1__updateM2 *ns1__updateM2;	/* optional element of type ns1:updateM2 */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (47)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (48)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (50)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (53)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (54)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stubs                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__CheckSNtest(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__CheckSNtest *ns1__CheckSNtest, struct _ns1__CheckSNtestResponse *ns1__CheckSNtestResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__CheckSN(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__CheckSN *ns1__CheckSN, struct _ns1__CheckSNResponse *ns1__CheckSNResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__getSource(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__getSource *ns1__getSource, struct _ns1__getSourceResponse *ns1__getSourceResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__getSourceTest(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__getSourceTest *ns1__getSourceTest, struct _ns1__getSourceTestResponse *ns1__getSourceTestResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__updateM2(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__updateM2 *ns1__updateM2, struct _ns1__updateM2Response *ns1__updateM2Response);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__CheckSNtest(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__CheckSNtest *ns1__CheckSNtest, struct _ns1__CheckSNtestResponse *ns1__CheckSNtestResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__CheckSN(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__CheckSN *ns1__CheckSN, struct _ns1__CheckSNResponse *ns1__CheckSNResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__getSource(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__getSource *ns1__getSource, struct _ns1__getSourceResponse *ns1__getSourceResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__getSourceTest(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__getSourceTest *ns1__getSourceTest, struct _ns1__getSourceTestResponse *ns1__getSourceTestResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__updateM2(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__updateM2 *ns1__updateM2, struct _ns1__updateM2Response *ns1__updateM2Response);

#ifdef __cplusplus
}
#endif

#endif

/* End of soapStub.h */