// smartbell.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <wingdi.h>
#pragma comment(lib, "winmm.lib")

int main()
{	
	
	int a = 10;
	for (;;) {
		// if 1 button was pressed
		if (GetAsyncKeyState((int)65)) {
			printf("Key was pressed\n");
			PlaySound(TEXT("vericu.wav"), NULL, SND_FILENAME | SND_ASYNC);// - the correct code
			Sleep(1000);
		}
	}
}
