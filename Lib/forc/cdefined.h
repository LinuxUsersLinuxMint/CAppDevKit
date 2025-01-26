#ifndef _C_DEFINED_H_
#define _C_DEFINED_H_

#include "../../CAppDevKitLib/appcustomvar.h"

#define appfunc     app_func
#define afunc       void

appfunc print(char *str)
{
    printf("%s", str);
}

appfunc println(char *str)
{
    printf("%s", str);
}

appfunc p(char *str)
{
    printf("%s", str);
}

#endif