#include<iostream>
#include<vector>
#include<thread>
#include"class.h"
#include"map_create.h"
#include"role_operate.h"
int main()
{
	std::srand(time(0));//随机数启动
	std::vector<std::vector<std::vector<int>>> map_id = map::map_id_create(map_long, map_wide, map_high);//创建地图
	std::vector<box> box_data = map::box_data();
	std::vector<double> cde;//坐标储存数组
	cde.reserve(4);

	/*for (int j = 0; j < map_wide; ++j)
	{
		for (int i = 0; i < map_long; ++i)
			std::cout << map_id[i][j][50] << " ";
		std::cout << std::endl;
	}*/
	//打印数字地图.jpg
	steve_make(cde);//创建角色 坐标、
	//std::thread move_td();
	move(map_id, box_data, cde[1], cde[2], cde[3]);
	//std::cout << "你" << std::endl;
	return 0;
}