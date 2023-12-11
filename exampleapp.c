#include "CAppDevKitInfoLib/cappdevkitinfo.h"
#include "CAppDevKitLib/appcustomvar.h"
#include "CAppDevKitLib/appvoid.h"
#include "Lib/customdefine.h"

_i main()
{
    _i process;

    printf("CAppDevKit Process (appinfo (1) / cappdevkitinfo (2) / appexit (3)): ");
    scanf("%d", &process);

    if (process == 1)
    {
        appinfo("ExampleCAppDevKitProject",1.7,"11/24/2023","12/02/2023","@LinuxUsersLinuxMint","https://linuxuserslinuxmint.github.io");
    }
    else if (process == 2)
    {
        cappdevkit_info();
    }
    else if (process == 3)
    {
        app_exit();
    }
    else
    {
        printf("Invalid process...");
    }
    r 0;
}