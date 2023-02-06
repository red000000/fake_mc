#include"class.h"
box::box()//默认为10
{
	this->box_long = 10;
	this->box_wide = 10;
	this->box_high = 10;
	this->id = 0;//简单初始化
}
void box::box_set(int box_long, int box_wide, int box_high)
{
	this->box_long = box_long;
	this->box_wide = box_wide;
	this->box_high = box_high;
}
//分割线---------
grass::grass()
{
	this->name = "草方块";
	this->id = 1;
	this->Excavate_Level = 0;
}
stone::stone()
{
	this->name = "石头";
	this->id = 2;
	this->Excavate_Level = 1;
}