#pragma once
#include<vector>
#include<string>
#define map_longsize 1000
#define map_widesize 1000
#define map_highsize 1000
//�����ǵ�ͼ��С
#define box_size 10			//���鳤���Ϊ10
#define map_long (map_longsize/box_size)
#define map_wide (map_widesize/box_size)
#define map_high (map_highsize/box_size)
//�����ǵ�ͼ�������(ע�����ȡ������
#define box_max_id 5		//�����������

namespace map
{
std::vector<std::vector<std::vector<int>>> map_id_create(int x, int y, int z);
std::vector<box> box_data();
}
