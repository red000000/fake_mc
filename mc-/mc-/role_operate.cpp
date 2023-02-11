#include<iostream>
#include <time.h>
#include<Windows.h>
#include <vector>
#include<cmath>
#include "class.h"
#include "map_create.h"
#include "role_operate.h"

void steve_make(std::vector<int>&cde)
{
	cde.push_back(-1);//填充下标为0的位置
	cde.push_back(rand() % 1000 + 1);
	cde.push_back(rand() % 1000 + 1);
	cde.push_back(500);
}
void judje(int x, int y, int z) {
	if (x > 1000)
		x = 1000;
	if (x < 10)
		x = 10;
	if (y>1000)
		y = 1000;
	if (y < 10)
		y = 10;
}
extern double a;
//z范围 20-1010
//x y范围10-1000 ↓
void move(std::vector<std::vector<std::vector<int>>>&map_id, std::vector<box>& box_data, int& x, int& y, int& z)
{
	int x_box = x / 10, y_box = y / 10, z_box = z / 10;
	while (1)
	{	
		if (GetKeyState(74) < 0|| GetKeyState(106) < 0) {
			if (++a > 360)
				a = 0;
		}
		if (GetKeyState(75) < 0|| GetKeyState(107) < 0) {
			if (--a < 0)
				a = 360;
		}
		if (GetKeyState(87) < 0 || GetKeyState(119) < 0)
		{
			if (box_data[map_id[x_box + 1][y_box][z_box]].id == 0 && box_data[map_id[x_box + 1][y_box][z_box + 1]].id == 0)
			{
				x += 5 * cos(a / 180);
				y += 5 * sin(a / 180);
				judje(x, y, z);
			}
			else;
		}
		if (GetKeyState(83) < 0 || GetKeyState(115) < 0)
		{
			if (box_data[map_id[x_box - 1][y_box][z_box]].id == 0 && box_data[map_id[x_box - 1][y_box][z_box + 1]].id == 0)
			{
				x -= 5 * cos(a / 180);
				y -= 5 * sin(a / 180);
				judje(x, y, z);
			}
			else;
		}
		if (GetKeyState(65) < 0 || GetKeyState(97) < 0)
		{
			if (box_data[map_id[x_box][y_box+1][z_box]].id == 0 && box_data[map_id[x_box][y_box+1][z_box + 1]].id == 0)
			{
				y -= 5 * cos(a / 180);
				x -= 5 * sin(a / 180);
				judje(x, y, z);
			}
			else;

		}
		if (GetKeyState(68) < 0 || GetKeyState(100) < 0)
		{
			if (box_data[map_id[x_box][y_box-1][z_box]].id == 0 && box_data[map_id[x_box][y_box-1][z_box + 1]].id == 0)
			{
				y += 5 * cos(a / 180);
				x += 5 * sin(a / 180);
				judje(x, y, z);
			}
			else;
		}
		map::map_print(map_id, box_data,x,y,z);
		Sleep(100);
		system("cls");
	}
}