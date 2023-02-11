#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<fstream>
#include"class.h"
#include"map_create.h"

std::vector<std::vector<std::vector<int>>> map::map_id_create(int x, int y, int z)
{
	std::srand(time(0));
	//����ʵ������ʱ�������飬Ϊmap����
	std::vector<int> vz;
	std::vector<std::vector<int>> vy;
	std::vector<std::vector<std::vector<int>>> map_id;
	vz.reserve(z);
	vy.reserve(y);
	map_id.reserve(x);
	int id;
	for (int i = 0; i < x; ++i)//��ά���鸳idֵ,�ݶ�1-10
	{
		for (int i = 0; i < y; ++i)
		{
			//һ�뷽��һ���
			for (int i = 0; i < 50; ++i)//50��ʵ�巽��
			{
				id = rand() % box_max_id + 1;
				vz.push_back(id);
			}
			for (int i = 0; i < z-50; ++i)//����
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
		std::cout << "��box.txt�ļ�ʧ��" << std::endl;
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
	std::cout << x << "    " << y << "    " << z << "    ��ǰ����" << dir << "          " << std::endl;
	std::cout << "����ǰ�����飺" << box_data[map_id[x_box + 1][y_box][z_box]].name << std::endl;
	std::cout << "����ǰ�����飺" << box_data[map_id[x_box + 1][y_box][z_box + 1]].name << std::endl;
	std::cout << "�����󷽷��飺" << box_data[map_id[x_box][y_box + 1][z_box]].name << std::endl;
	std::cout << "�����󷽷��飺" << box_data[map_id[x_box][y_box + 1][z_box + 1]].name << std::endl;
	std::cout << "����󷽷��飺" << box_data[map_id[x_box - 1][y_box][z_box]].name << std::endl;
	std::cout << "����󷽷��飺" << box_data[map_id[x_box - 1][y_box][z_box + 1]].name << std::endl;
	std::cout << "�����ҷ����飺" << box_data[map_id[x_box][y_box - 1][z_box]].name << std::endl;
	std::cout << "�����ҷ����飺" << box_data[map_id[x_box][y_box - 1][z_box + 1]].name << std::endl;
	std::cout << "�����Ϸ����飺" << box_data[map_id[x_box][y_box][z_box + 2]].name << std::endl;
	std::cout << "�����·����飺" << box_data[map_id[x_box][y_box][z_box -2]].name << std::endl;

}


