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
	cout << "ɳ���ĳ�Ա��λ��Ϊ��" << SitNum << endl;
}
