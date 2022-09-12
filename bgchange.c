#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "user32.lib")

int main(){
    WCHAR *bg = "\\bg.png";
    TCHAR cwd[MAX_PATH]; 
    GetCurrentDirectory(MAX_PATH, cwd);
    lstrcat(cwd, bg);
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, cwd, SPIF_UPDATEINIFILE);
}