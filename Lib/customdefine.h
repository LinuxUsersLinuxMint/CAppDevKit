#ifndef _CUSTOM_DEFINE_H_
#define _CUSTOM_DEFINE_H_

#include "../CAppDevKitLib/appcustomvar.h"

// return keywords

#define r      return

// func keywords

#define v   void
#define f   void
#define function    void
#define func        void
#define fun         void
#define def         void
#define afunc       void

// Data Types keywords

#define _i      int
#define _si     short int
#define _li     long int
#define _d      double
#define _f      float
#define _c      char
#define _cc     const char
#define _co     const

// typedef keywords

#define tdef    typedef

// structures keywords

#define st   struct
#define en   enum
#define ui   union

// print func

afunc print(char *str)
{
    printf("%s", str);
}

afunc println(char *str)
{
    printf("%s", str);
}

afunc p(char *str)
{
    printf("%s", str);
}

// for cpp (C++)

#define use     using
#define nsp     namespace
#define cl      class
#define pb      public:
#define pr      private:
#define ptc     protected:
#define uns     using namespace std;
#define ct      cout
#define cn      cin
#define ed     endl

#endif