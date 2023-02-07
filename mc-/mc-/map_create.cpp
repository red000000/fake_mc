#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<fstream>
#include"class.h"
#include"map_create.h"

std::vector<std::vector<std::vector<int>>> map::map_id_create(int x, int y, int z)
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

std::vector<box> map::box_data()
{
	int id = 0;
	std::vector<box> box((100+ box_max_id)*sizeof(box));
	std::ifstream BOX_FILE;
	BOX_FILE.open("box.txt",std::ios::in|std::ios::_Nocreate);
	if (BOX_FILE.is_open())
	{
		while (BOX_FILE >> id)
		{
			BOX_FILE >> box[id].name >> box[id].Excavate_Level_Need;
		}
		BOX_FILE.close();
	}
	else
	{
		std::cout << "打开box.txt文件失败" << std::endl;
		exit(0);
	}

	return box;
}
