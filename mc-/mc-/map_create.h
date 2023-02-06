#pragma once
#include<vector>
#define map_longsize 1000
#define map_widesize 1000
#define map_highsize 1000
//以上是地图大小
#define box_size 10			//方块长宽高为10
#define map_long (map_longsize/box_size)
#define map_wide (map_widesize/box_size)
#define map_high (map_highsize/box_size)
//以上是地图方块个数(注意除法取整问题
#define box_max_id 10		//方块种类个数


std::vector<std::vector<std::vector<int>>> map_id_create(int x, int y, int z);
