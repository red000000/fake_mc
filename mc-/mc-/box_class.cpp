#include"class.h"
#include"map_create.h"
box::box()//Ĭ��Ϊ10
{
	this->name = "xxx";
	this->box_long = box_size;
	this->box_wide = box_size;
	this->box_high = box_size;
	this->id = 0;//�򵥳�ʼ��
}
void box::box_set(int box_long, int box_wide, int box_high)
{
	this->box_long = box_long;
	this->box_wide = box_wide;
	this->box_high = box_high;
}
//�ָ���---------
