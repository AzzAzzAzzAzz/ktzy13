#include "Furniture.h"
#include<iostream>

void Furniture::Edit(string name)
{
	this->name = name;
}

void Furniture::Intro()
{
	cout << "家具的名称：" << name << endl;
}