#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<conio.h>
#include "class.h"
#include "map_create.h"
#include <vector>
#include "role_operate.h"

void abc(int a);
std::vector<int> steve::move()
{
	std::srand(time(0));
	int x = rand() % 1000 + 1;
	int y = rand() % 1000 + 1;
	int z = 500;
	std::cout << x << "    " << y << "    " << z <<"          \r";
	int a = 4;
	void steve::move() {
		while (1) {
			void abc(a);
			if (GetKeyState(87) < 0 || GetKeyState(119) < 0) {
				switch (a % 4) {
				case 0: x += 5;
				case 1: y += 5;
				case 2: x -= 5;
				case 3: y -= 5;
				}
			}
			if (GetKeyState(83) < 0 || GetKeyState(115)<0) {
				switch (a % 4) {
				case 0:x -= 5;
				case 1:y -= 5;
				case 2:x += 5;
				case 3:y -= 5;
				}
			}
			if (GetKeyState(65) < 0 || GetKeyState(97)<0) {
				switch (a % 4) {
				case 0:y += 5;
				case 1:x -= 5;
				case 2:y -= 5;
				case 3:x += 5;
				}
			}
			if (GetKeyState(68) < 0 || GetKeyState(100)<0) {
				switch (a % 4) {
				case 0:y -= 5;
				case 1:y -= 5;
				case 2:x += 5;
				case 3:y -= 5;
				}
			}
			Sleep(100);
			std::cout << x << "    " << y << "    " << z << "    " << "    /r";
		}
	}
}

void abc(int a) {
	if (GetKeyState(74)) {
		a++;
		if (a > 4){
			a = 1;
	}
	if (GetKeyState(75)) {
		a--;
		if (a < 1)
			a = 4;
	}
}