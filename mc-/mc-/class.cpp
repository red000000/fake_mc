#include"class.h"
box::box()//Ĭ��Ϊ10
{
	this->box_long = 10;
	this->box_wide = 10;
	this->box_high = 10;
	this->id = 0;//�򵥳�ʼ��
}
void box::box_set(int box_long, int box_wide, int box_high)
{
	this->box_long = box_long;
	this->box_wide = box_wide;
	this->box_high = box_high;
}
//�ָ���---------
grass::grass()
{
	this->name = "�ݷ���";
	this->id = 1;
	this->Excavate_Level = 0;
}
stone::stone()
{
	this->name = "ʯͷ";
	this->id = 2;
	this->Excavate_Level = 1;
}