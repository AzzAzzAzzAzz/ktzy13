#include "Sofa.h"
#include<iostream>
using namespace std;

void Sofa::Edit(string name, int SitNum)
{
	Furniture::Edit(name);
	this->SitNum = SitNum;
}

void Sofa::Intro()
{
	cout << "沙发的成员座位数为：" << SitNum << endl;
}
