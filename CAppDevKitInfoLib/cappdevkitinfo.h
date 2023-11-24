#ifndef _C_APP_DEV_KIT_INFO_H_
#define _C_APP_DEV_KIT_INFO_H_

#include "../CAppDevKitLib/appcustomvar.h"

#define C_LIB_NAME      "CAppDevKit"
#define C_APP_DEV_KIT   "CAppDevKit (C App Developer Kit)"
#define CAppDevKit_Ver   1.0
#define CAppDevKit_Developer_Name   "@LinuxUsersLinuxMint"
#define CAppDevKit_Developer_website    "https://linuxuserslinuxmint.github.io"

struct CAppDevKitInfo
{
    app_name clibname;
    app_name cappdevkit;
    app_ver_t cappdevkitver;
    app_developer_name appdevsname;
    app_developer_website appdevswebsite;
} CAppDevKitI;

#endif