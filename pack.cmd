for /f "skip=1" %%x in ('wmic os get localdatetime') do if not defined MyDate set MyDate=%%x
set today=%MyDate:~0,4%%MyDate:~4,2%%MyDate:~6,2%
nrfutil.exe dfu genpkg --application arm5\_build\ossw-firmware-s120.hex --application-version 0xffffffff --dev-revision 0xffff --dev-type 0xffff --sd-req 0xFFFE ..\ossw-firmware-%today%.zip
