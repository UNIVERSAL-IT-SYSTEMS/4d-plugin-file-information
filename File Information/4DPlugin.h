/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : File Information
 #	author : miyako
 #	2015/02/19
 #
 # --------------------------------------------------------------------------------*/

#if VERSIONWIN
#include "Strsafe.h"
#endif

#define ERR_CANT_QUERY_VALUE -1
#define ERR_CANT_GET_SIZE -2
#define ERR_CANT_GET_INFO -3
#define STRTEMP_SIZE 512
#define PARAMS_SIZE 10

// --- File
void FILE_Get_information(sLONG_PTR *pResult, PackagePtr pParams);
