#!/usr/bin/sh
cp exampleapp.c CAppDevKit/
chmod a+x CAppDevKit/

cp CAppDevKitInfoLib/cappdevkitinfo.h CAppDevKit/CAppDevKitInfoLib/
chmod a+x CAppDevKit/CAppDevKitInfoLib/cappdevkitinfo.h

cp CAppDevKitLib/appcustomvar.h CAppDevKit/CAppDevKitLib/
chmod a+x CAppDevKit/CAppDevKitLib/appcustomvar.h

cp CAppDevKitLib/appvoid.h CAppDevKit/CAppDevKitLib/
chmod a+x CAppDevKit/CAppDevKitLib/appvoid.h

cp Lib/customdefine.h CAppDevKit/Lib/
chmod a+x CAppDevKit/Lib/customdefine.h

cp Lib/forc/cdefined.h CAppDevKit/Lib/forc/
chmod a+x CAppDevKit/Lib/forc/cdefined.h

cp FastVar/cppfastvar.hpp CAppDevKit/FastVar/
chmod a+x CAppDevKit/FastVar/cppfastvar.hpp

cp ForCpp/cppdefined.hpp CAppDevKit/ForCpp/
chmod a+x CAppDevKit/ForCpp/cppdefined.hpp