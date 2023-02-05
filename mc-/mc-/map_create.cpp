#include<stdlib.h>
#include<time.h>
#include"map_create.h"

using namespace map;
std::vector<std::vector<std::vector<int>>> map::map_create(int x, int y, int z)
{
	std::srand(time(0));
	std::vector<std::vector<std::vector<int>>> map;
	//下面实例化临时储存数组，为map服务
	std::vector<int> vz;
	std::vector<std::vector<int>> vy;
	vz.reserve(z);
	vy.reserve(y);
	map.reserve(x);
	for (int i = 0; i < x; ++i)//三维数组赋id值,暂定1-10
	{
		for (int i = 0; i < y; ++i)
		{
			for (int i = 0; i < z; ++i)
			{
				int id = rand() % box_max_id + 1;
				vz.push_back(id);
			}
			vy.push_back(vz);
			vz.clear();
		}
		map.push_back(vy);
		vy.clear();
	}

	return map;
}

