#include<iostream>
#include<vector>
#include"map_create.h"
int main()
{
	std::vector<std::vector<std::vector<int>>> map= map::map_create(map_long, map_wide, map_high);//������ͼ
	/*for (int j = 0; j < map_wide; ++i)
	{
		for (int i = 0; i < map_long; ++j)
			std::cout << map[i][j][0] << " ";
		std::cout << std::endl;
	}
	//��ӡ���ֵ�ͼ.jpg
	*/
	return 0;
}