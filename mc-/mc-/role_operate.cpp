#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<conio.h>
#include "class.h"
#include "map_create.h"
#include <vector>
#include "role_operate.h"


std::vector<int> steve::move()
{
	std::srand(time(0));
	int x = rand() % 1000 + 1;
	int y = rand() % 1000 + 1;
	int z = 500;
	std::cout << x << "    " << y << "    " << z <<"          \r";
	void steve::move() {
		while (1) {
			if (GetKeyState(87) < 0 || GetKeyState(119) < 0) {
				x += 5;
			}
			if (GetKeyState(83) < 0 || GetKeyState(115)) {
				x -= 5;
			}
			if (GetKeyState(65) < 0 || GetKeyState(97)) {
				y += 5;
			}
			if (GetKeyState(68) < 0 || GetKeyState(100)) {
				y -= 5;
			}
			sleep(100);
			std::cout << x << "    " << y << "    " << z << "    " << "    /r";
		}
	}
}