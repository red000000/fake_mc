#include<stdlib.h>
#include<time.h>
#include"class.h"
#include"map_create.h"

std::vector<std::vector<std::vector<int>>> map_id_create(int x, int y, int z)
{
	std::srand(time(0));
	//下面实例化临时储存数组，为map服务
	std::vector<int> vz(z, 0);
	std::vector<std::vector<int>> vy(y, vz);
	std::vector<std::vector<std::vector<int>>> map_id(x, vy);
	for (int i = 0; i < x; ++i)//三维数组赋id值,暂定1-10
	{
		for (int i = 0; i < y; ++i)
		{
			for (int i = 0; i < z / 2; ++i)//一半方块一半空
			{
				int id = rand() % box_max_id + 1;
				vz.push_back(id);
			}
			vy.push_back(vz);
			vz.clear();
		}
		map_id.push_back(vy);
		vy.clear();
	}
	return map_id;
}

