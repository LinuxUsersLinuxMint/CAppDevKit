#!/usr/bin/sh
cp exampleapp.c CAppDevKit/
chmod a+x CAppDevKit/
cp CAppDevKitInfoLib/cappdevkitinfo.h CAppDevKit/CAppDevKitInfoLib/
chmod a+x CAppDevKit/CAppDevKitInfoLib/cappdevkitinfo.h
cp CAppDevKitLib/appcustomvar.h CAppDevKit/CAppDevKitLib/
chmod a+x CAppDevKit/CAppDevKitLib/appcustomvar.h
cp CAppDevKitLib/appvoid.h CAppDevKit/CAppDevKitLib/
chmod a+x CAppDevKit/CAppDevKitLib/appvoid.h