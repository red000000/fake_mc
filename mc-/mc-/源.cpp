#include<iostream>
#include<vector>
#include<thread>
#include"class.h"
#include"map_create.h"
#include"role_operate.h"
int main()
{
	std::srand(time(0));//���������
	std::vector<std::vector<std::vector<int>>> map_id = map::map_id_create(map_long, map_wide, map_high);//������ͼ
	std::vector<box> box_data = map::box_data();
	std::vector<double> cde;//���괢������
	cde.reserve(4);

	/*for (int j = 0; j < map_wide; ++j)
	{
		for (int i = 0; i < map_long; ++i)
			std::cout << map_id[i][j][50] << " ";
		std::cout << std::endl;
	}*/
	//��ӡ���ֵ�ͼ.jpg
	steve_make(cde);//������ɫ ���ꡢ
	//std::thread move_td();
	move(map_id, box_data, cde[1], cde[2], cde[3]);
	//std::cout << "��" << std::endl;
	return 0;
}