#pragma once
#include<string>
class items			//所有实体声明
{
public:
	int id;
};
//分割线——————————
class box:public items			//方块类的声明
{
public:
	box();
	int box_long;
	int box_wide;
	int box_high;
	int Excavate_Level;//挖掘等级
	virtual	void box_set(int box_long, int box_wide, int box_high);
};
class grass :public box
{
public:
	grass();
	std::string name;
};
class stone :public box
{
public:
	stone();
	std::string name;
};
//分割线——————————
class tool :public items
{
	int Durable;//耐久
};