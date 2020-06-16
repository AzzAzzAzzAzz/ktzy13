#include "Bed.h"
#include<iostream>
using namespace std;

void Bed::Edit(string name, double longth, double width)
{
	Furniture::Edit(name);
	this->longth = longth;
	this->width = width;
}

void Bed::Intro()
{
	cout << "床的长度为：" << longth << endl;
	cout << "床的宽度为：" << width << endl;
}