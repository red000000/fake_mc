#pragma once
#include<vector>
#include<string>
#define map_longsize 1020
#define map_widesize 1020
#define map_highsize 1040
//�����ǵ�ͼ��С
#define box_size 10			//���鳤���Ϊ10
#define map_long (map_longsize/box_size)
#define map_wide (map_widesize/box_size)
#define map_high (map_highsize/box_size)
//�����ǵ�ͼ�������(ע�����ȡ������
#define box_max_id 5		//�����������
#define PI (acos(-1.0))
extern double angle;		//�Ƕ�������map.cpp��role.cppҪ��,��map.cpp����
namespace map
{
std::vector<std::vector<std::vector<int>>> map_id_create(int x_length, int y_length, int z_length);
std::vector<box> box_data();
void map_print(std::vector<std::vector<std::vector<int>>>& map_id, std::vector<box>& box_data,double&x,double&y,double&z);
}
