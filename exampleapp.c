#include "CAppDevKitInfoLib/cappdevkitinfo.h"
#include "CAppDevKitLib/appcustomvar.h"
#include "CAppDevKitLib/appvoid.h"

int main()
{
    int process;

    printf("CAppDevKit Process (appinfo (1) / cappdevkitinfo (2) / appexit (3)): ");
    scanf("%d", &process);

    if (process == 1)
    {
        appinfo("ExampleCAppDevKitProject",1.0,"11/24/2023","11/25/2023","@LinuxUsersLinuxMint","https://linuxuserslinuxmint.github.io");
    }
    if (process == 2)
    {
        cappdevkit_info();
    }
    if (process == 3)
    {
        app_exit();
    }
    return 0;
}