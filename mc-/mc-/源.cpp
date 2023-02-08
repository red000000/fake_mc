#include<iostream>
#include<vector>
#include"class.h"
#include"map_create.h"
int main()
{
	std::vector<std::vector<std::vector<int>>> map_id = map::map_id_create(map_long, map_wide, map_high);//创建地图
	std::vector<box> box_data = map::box_data();
	/*
	for (int j = 0; j < map_wide; ++j)
	{
		for (int i = 0; i < map_long; ++i)
			std::cout << map_id[i][j][50] << " ";
		std::cout << std::endl;
	}*/

	//打印数字地图.jpg
	steve A;
	A.move();
	return 0;
}