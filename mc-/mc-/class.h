#pragma once
#include<string>
class items			//����ʵ������
{
public:
	int id;
};
//�ָ��ߡ�������������������
class box:public items			//�����������
{
public:
	box();
	int box_long;
	int box_wide;
	int box_high;
	int Excavate_Level;//�ھ�ȼ�
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
//�ָ��ߡ�������������������
class tool :public items
{
	int Durable;//�;�
};