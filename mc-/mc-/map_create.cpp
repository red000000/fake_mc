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
	std::vector<int> vz;
	std::vector<std::vector<int>> vy;
	std::vector<std::vector<std::vector<int>>> map_id;
	vz.reserve(z);
	vy.reserve(y);
	map_id.reserve(x);
	int id;
	for (int i = 0; i < x; ++i)//三维数组赋id值,暂定1-10
	{
		for (int i = 0; i < y; ++i)
		{
			//一半方块一半空
			for (int i = 0; i < 50; ++i)//50格实体方块
			{
				id = rand() % box_max_id + 1;
				vz.push_back(id);
			}
			for (int i = 0; i < z-50; ++i)//空气
			{
				vz.push_back(0);
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
	std::vector<box> box(100 + box_max_id);
	std::ifstream BOX_FILE;
	BOX_FILE.open("box.txt", std::ios::in | std::ios::_Nocreate);
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
void map::map_print(std::vector<std::vector<std::vector<int>>>& map_id, std::vector<box>& box_data, int& x, int& y, int& z)
{
	char dir = 'N';
	int x_box = x / 10;
	int y_box = y / 10;
	int z_box = z / 10;
	std::cout << x << "    " << y << "    " << z << "    当前朝向：" << dir << "          " << std::endl;
	std::cout << "下身前方方块：" << box_data[map_id[x_box + 1][y_box][z_box]].name << std::endl;
	std::cout << "上身前方方块：" << box_data[map_id[x_box + 1][y_box][z_box + 1]].name << std::endl;
	std::cout << "下身左方方块：" << box_data[map_id[x_box][y_box + 1][z_box]].name << std::endl;
	std::cout << "上身左方方块：" << box_data[map_id[x_box][y_box + 1][z_box + 1]].name << std::endl;
	std::cout << "下身后方方块：" << box_data[map_id[x_box - 1][y_box][z_box]].name << std::endl;
	std::cout << "上身后方方块：" << box_data[map_id[x_box - 1][y_box][z_box + 1]].name << std::endl;
	std::cout << "下身右方方块：" << box_data[map_id[x_box][y_box - 1][z_box]].name << std::endl;
	std::cout << "上身右方方块：" << box_data[map_id[x_box][y_box - 1][z_box + 1]].name << std::endl;
	std::cout << "上身上方方块：" << box_data[map_id[x_box][y_box][z_box + 2]].name << std::endl;
	std::cout << "下身下方方块：" << box_data[map_id[x_box][y_box][z_box -2]].name << std::endl;

}


