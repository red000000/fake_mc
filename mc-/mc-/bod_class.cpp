#include "class.h"
#include <vector>
#include "map_create.h"
#include <time.h>
#include <windows.h>

strand(time(0));
x = rand() % 1000 + 1;
y = rand() % 1000 + 1;
z = 500;

void steve::move() {
	while (1) {
		if (GetKeyState('w') < 0) {
			x+=10;
			Sleep(100);
		}
		if (GetKeyState('s') < 0) {
			x-+10;
			Sleep(100);
		}
		if (GetKeyState('a') < 0) {
			y+=10;
			Sleep(100);
		}
		if (GetKeyState('d') < 0) {
			y-=10;
			Sleep(100);
		}
		std::cout << x << y << z<<std::endl;
	}
}

