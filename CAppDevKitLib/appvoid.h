#ifndef _APP_VOID_H_
#define _APP_VOID_H_

#include "appcustomvar.h"
#include "../CAppDevKitInfoLib/cappdevkitinfo.h"

app_func appinfo(app_name appname, app_ver_t appver, app_rs_date apprs, app_lsup_date applsdate, app_developer_name appdevname, app_developer_website appdevwsite)
{
    printf("AppName: %s\n", appname);
    printf("AppVersion: %f\n", appver);
    printf("AppRsDate: %s\n", apprs);
    printf("AppLastUpdatedDate: %s\n", applsdate);
    printf("AppDeveloper: %s\n", appdevname);
    printf("AppDevWebSite: %s\n", appdevwsite);
}

app_func cappdevkit_info()
{
    struct CAppDevKitInfo CAppDevKitI;
    CAppDevKitI.clibname = C_LIB_NAME;
    CAppDevKitI.cappdevkit = C_APP_DEV_KIT;
    CAppDevKitI.cappdevkitver = CAppDevKit_Ver;
    CAppDevKitI.cappreleasedate = CAppDevKit_RS_Date;
    CAppDevKitI.capplsupdate = CAppDevKit_LAST_UPDATED_DATE;
    CAppDevKitI.appdevsname = CAppDevKit_Developer_Name;
    CAppDevKitI.appdevswebsite = CAppDevKit_Developer_website;

    printf("CAppDevKitName: %s\n", CAppDevKitI.clibname);
    printf("CAppDevKit: %s\n", CAppDevKitI.cappdevkit);
    printf("CAppDevKitVer: %f\n", CAppDevKitI.cappdevkitver);
    printf("CAppDevKitReleaseDate: %s\n", CAppDevKitI.cappreleasedate);
    printf("CAppDevKitLastUpdatedDate: %s\n", CAppDevKitI.capplsupdate);
    printf("CAppDevName: %s\n", CAppDevKitI.appdevsname);
    printf("CAppDevKitWebSite: %s\n", CAppDevKitI.appdevswebsite);
}

app_func app_exit()
{
    exit(0);
}

#endif