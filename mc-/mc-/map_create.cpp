#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<fstream>
#include<cmath>
#include"class.h"
#include"map_create.h"

double angle = 0;
std::vector<std::vector<std::vector<int>>> map::map_id_create(int x_length, int y_length, int z_length)
{
	//����ʵ������ʱ�������飬Ϊmap����
	std::vector<int> vz;
	std::vector<std::vector<int>> vy;
	std::vector<std::vector<std::vector<int>>> map_id;
	vz.reserve(z_length);
	vy.reserve(y_length);
	map_id.reserve(x_length);
	int id;
	for (int i = 0; i < x_length; ++i)//��ά���鸳idֵ,�ݶ�1-10
	{
		for (int i = 0; i < y_length; ++i)
		{
			//һ�뷽��һ���
			for (int i = 0; i < 50; ++i)//50��ʵ�巽��
			{
				id = rand() % box_max_id + 1;
				vz.push_back(id);
			}
			for (int i = 0; i < z_length-50; ++i)//����
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
void map::map_print(std::vector<std::vector<std::vector<int>>>& map_id, std::vector<box>& box_data, double& x, double& y, double& z)
{
	int x_box = floor(x / 10);
	int y_box = floor(y / 10);
	int z_box = floor(z / 10);
	//����ȡ������
	std::cout << x << "    " << y << "    " << z << "    ��ǰ����" << angle <<"��" << "          " << std::endl;
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


