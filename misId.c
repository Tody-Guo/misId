/***************************************************
*	(c) Tody 2012, T-ware Inc.
*
*	Free software under GPLv3
*
*	Function: get SN data from MIS ShopFloor
*	Version: 1.0.1
*	FileName: misId.c
*	Author: Tody Guo
*
* changelog:
*	v1.0.1 @ 2012-07-10
* 	*) fix awk tool cannot read M1_boardId from MIS...
*	*) change help M2_BoardId to Sys_BoardId
*
*	v1.0.0 @ 2012-07-04
*	*) first release...
****************************************************/

#include "soapH.h"
#include "Service1Soap.nsmap"

#define progname	"misId"
#define	version		"1.0.1"

void usage(void)
{
	fprintf(stderr, "get SN data from Shopfloor tool   Version: %s\n"
					"\n(c) Tody 2012, T-ware Inc.\n"
					"\nUsage:\t%s <Serialnumber> [Sys_BoardId]\nOptions:\n"
					"\tSerialnumber\tget Data from shopfloor via Tablet Serial number\n"
					"\tSys_BoardId\tUpdate Sys_BoardId to shopfloor by Serial number\n", version, progname );
	exit(1);
}


int main(int argc, char *argv[])
{
	struct soap 					*soap;
	struct _ns1__getSource 			sn;
	struct _ns1__getSourceResponse 	retData;
	struct _ns1__updateM2			snM2Id;
	struct _ns1__updateM2Response	retM2;
	
	char iData[512];   /*Size is ok for later use?*/
	
	memset(iData, 0, sizeof(iData));
	
	sn.strSn = argv[1];

	retData.data = iData;
	
	soap = soap_new();

	if ( argc == 2 )
	{
	
		if (soap_call___ns2__getSource(soap, NULL, NULL, &sn, &retData) == SOAP_OK)
		{
			if (retData.ret == 0)
			{
				fprintf(stdout, "%s", retData.data); /* bug fix */
				fflush(stdout);  /* bug fix @ 2012-07-10*/
			}else{
				printf(" -> Sn not found!");
				exit(1);
			}
		}
	} else if ( argc == 3)
	{
		snM2Id.serial_USCOREnumber = argv[1];
		snM2Id.m2_USCOREboard_USCOREid = argv[2];
		
		if (soap_call___ns2__updateM2(soap, NULL, NULL, &snM2Id, &retM2) == SOAP_OK)
		{
			if (retM2.ret == 1)
			{
				printf("Update M2 BoardId Ok!");
			}else{
				printf("Update M2 BoardId Failed!");
				exit(1);
			}
		}
	} else {
		usage();
	}
	
	
	soap_end(soap);
	free(soap);
	
	exit(0);  /*normal exit from program*/
}

