#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<conio.h>
#include "class.h"
#include "map_create.h"



void steve::move()
{
	std::srand(time(0));
	int x = rand() % 1000 + 1;
	int y = rand() % 1000 + 1;
	int z = 500;
	std::cout << x << "    " << y << "    " << z <<"          \r";
}