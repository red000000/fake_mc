#include "class.h"
#include "map_create.h"
#include <time.h>
#include <windows.h>
#include <iostream>
#include <vector>
std::srand(time(0));
x = rand() % 1000 + 10;
y = rand() % 1000 + 10;
z = 510;
std::cout << x << "    " << y << "    " << z << "    " << "    /r";
void steve::move() {
	while (1) {
		if (GetKeyState(87) < 0||GetKeyState(119)<0) {
			x+=5;
		}
		if (GetKeyState(83) < 0|| GetKeyState(115)) {
			x-=5;
		}
		if (GetKeyState(65) < 0|| GetKeyState(97)) {
			y+=5;
		}
		if (GetKeyState(68) < 0|| GetKeyState(100)) {
			y-=5;
		}
		sleep(100);
		std::cout << x << "    " << y << "    " << z << "    " << "    /r";
	}
}

