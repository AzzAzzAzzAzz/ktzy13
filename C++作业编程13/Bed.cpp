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
	cout << "���ĳ���Ϊ��" << longth << endl;
	cout << "���Ŀ��Ϊ��" << width << endl;
}