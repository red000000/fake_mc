#include"class.h"
#include"map_create.h"
box::box()//默认为10
{
	this->name = "xxx";
	this->box_long = box_size;
	this->box_wide = box_size;
	this->box_high = box_size;
	this->id = 0;//简单初始化
}
void box::box_set(int box_long, int box_wide, int box_high)
{
	this->box_long = box_long;
	this->box_wide = box_wide;
	this->box_high = box_high;
}
//分割线---------
