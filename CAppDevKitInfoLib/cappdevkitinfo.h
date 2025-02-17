#ifndef _C_APP_DEV_KIT_INFO_H_
#define _C_APP_DEV_KIT_INFO_H_

#include "../CAppDevKitLib/appcustomvar.h"
#include "../Lib/forc/cdefined.h"
#include "../Lib/customdefine.h"

#define C_LIB_NAME      "CAppDevKit"
#define C_APP_DEV_KIT   "CAppDevKit (C App Developer Kit)"
#define CAppDevKit_Ver   2.1
#define CAppDevKit_RS_Date  "11/24/2023"
#define CAppDevKit_LAST_UPDATED_DATE    "1/26/2025"
#define CAppDevKit_Developer_Name   "@LinuxUsersLinuxMint"
#define CAppDevKit_Developer_website    "https://linuxuserslinuxmint.github.io"

st CAppDevKitInfo
{
    app_name clibname, cappdevkit;
    app_ver_t cappdevkitver;
    app_rs_date cappreleasedate;
    app_lsup_date capplsupdate;
    app_developer_name appdevsname;
    app_developer_website appdevswebsite;
} CAppDevKitI;

#endif