#include "Furniture.h"
#include<iostream>

void Furniture::Edit(string name)
{
	this->name = name;
}

void Furniture::Intro()
{
	cout << "�Ҿߵ����ƣ�" << name << endl;
}