// smartbell.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>
#include <wingdi.h>
#include <errhandlingapi.h>
#pragma comment(lib, "winmm.lib")

#include <vector>
int main()
{
	// Assign vector
	std::vector<int> v;

	// fill the array with 10 five times
	v.assign(5, 10);

	for (auto a : v) {
		a -= 1;
	}
	v.erase(v.begin()+2);


	for (auto a : v) {
		std::cout << a << "\n";
	}

/*
	while(1) {
		for (int i = 3; i < 256; i++) {
			if ((GetAsyncKeyState(i)) ) {
				printf("Caracter %d\n", i);

				
				break;
			}
		}
		Sleep(1000);
	}
	*/
}
	

		// if 1 button was pressed
		//if (GetKeyboardState(*keys)) {
		//	printf("Key was pressed\n");
		//	PlaySound(TEXT("mywavsound.wav"), NULL, SND_FILENAME | SND_ASYNC);// - the correct code
		//	Sleep(1000);


