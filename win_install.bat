@echo off
@title=CAppDevKit Setup Environment
@color 1
:m
cls
echo Press enter to start the installation...
pause
echo CAppDevKit will be downloaded.
copy exampleapp.c C:\CAppDevKit
copy CAppDevKitInfoLib\cappdevkitinfo.h C:\CAppDevKit\CAppDevKitInfoLib
copy CAppDevKitLib\appcustomvar.h C:\CAppDevKit\CAppDevKitLib
copy CAppDevKitLib\appvoid.h C:\CAppDevKit\CAppDevKitLib
copy Lib\customdefine.h C:\CAppDevKit\Lib
pause
exit