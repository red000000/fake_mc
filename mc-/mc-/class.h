#pragma once
#include<string>
class items			//����ʵ������
{
public:
	int id;
};
//�ָ��ߡ������������������� box��
class box:public items			//�����������
{
public:
	box();
	std::string name;
	int box_long;
	int box_wide;
	int box_high;
	int Excavate_Level_Need;//��Ҫ���ھ�ȼ�
	virtual	void box_set(int box_long, int box_wide, int box_high);//һ���ò���
};
//�ָ��ߡ������������������� tool��
class tool :public items
{	
public:
	int Damage;
	int Durable;//�;�
	int Excavate_Level;//�ھ�ȼ�
};
class sword:public tool
{

};
class Drafts//����
{

};

class steve :public box//ʵ��
{
public:
	int x;
	int y;
	int z;
	void move();
};