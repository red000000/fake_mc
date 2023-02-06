#include<iostream>
#include<vector>
#include"class.h"
#include"map_create.h"
int main()
{
	std::vector<std::vector<std::vector<int>>> map_id = map_id_create(map_long, map_wide, map_high);//创建地图
	/*for (int j = 0; j < map_wide; ++j)
	{
		for (int i = 0; i < map_long; ++i)
			std::cout << map_id[i][j][50] << " ";
		std::cout << std::endl;
	}
	//打印数字地图.jpg
	*/
	grass a;
	std::cout << a.box_long << a.box_high << a.id << std::endl;
	a.box_set(1, 2, 3);
	std::cout << a.box_long << a.box_high << a.id << std::endl;
	return 0;
}