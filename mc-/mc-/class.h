#pragma once
#include<string>
class items			//所有实体声明
{
public:
	int id;
};
//分割线—————————— box↓
class box:public items			//方块类的声明
{
public:
	box();
	std::string name;
	int box_long;
	int box_wide;
	int box_high;
	int Excavate_Level_Need;//需要的挖掘等级
	virtual	void box_set(int box_long, int box_wide, int box_high);//一般用不上
};
//分割线—————————— tool↓
class tool :public items
{	
public:
	int Damage;
	int Durable;//耐久
	int Excavate_Level;//挖掘等级
};
class sword:public tool
{

};
class Drafts//稿子
{

};

class steve :public box//实体
{
public:
	int x;
	int y;
	int z;
	void move();
};