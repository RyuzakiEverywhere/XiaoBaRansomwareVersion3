#pragma once
#include <Windows.h>

void SetWallpaper() 
{
	SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)"C:\\XiaoBaTemp\\XiaoBaWallpaper.jpg", SPIF_SENDCHANGE); //SPIA to Change Wallpaper :D
}