#ifndef _APP_VOID_H_
#define _APP_VOID_H_

#include "appcustomvar.h"
#include "../CAppDevKitInfoLib/cappdevkitinfo.h"

app_func appinfo(app_name appname, app_ver_t appver, app_developer_name appdevname, app_developer_website appdevwsite)
{
    printf("AppName: %s\n", appname);
    printf("AppVersion: %f\n", appver);
    printf("AppDeveloper: %s\n", appdevname);
    printf("AppDevWebSite: %s\n", appdevwsite);
}

app_func cappdevkit_info()
{
    struct CAppDevKitInfo CAppDevKitI;
    CAppDevKitI.clibname = C_LIB_NAME;
    CAppDevKitI.cappdevkit = C_APP_DEV_KIT;
    CAppDevKitI.cappdevkitver = CAppDevKit_Ver;
    CAppDevKitI.appdevsname = CAppDevKit_Developer_Name;
    CAppDevKitI.appdevswebsite = CAppDevKit_Developer_website;

    printf("CAppDevKitName: %s\n", CAppDevKitI.clibname);
    printf("CAppDevKit: %s\n", CAppDevKitI.cappdevkit);
    printf("CAppDevKitVer: %f\n", CAppDevKitI.cappdevkitver);
    printf("CAppDevName: %s\n", CAppDevKitI.appdevsname);
    printf("CAppDevKitWebSite: %s\n", CAppDevKitI.appdevswebsite);
}

app_func app_exit()
{
    exit(0);
}

#endif