#pragma once
#include "Furniture.h"
class Sofa :
	virtual public Furniture
{
public:
	Sofa(string name, int SitNum) :Furniture(name) 
	{
		this->SitNum = SitNum;
	}
	void Edit(string name, int SitNum);
	void Intro();
protected:
	int SitNum;
};

