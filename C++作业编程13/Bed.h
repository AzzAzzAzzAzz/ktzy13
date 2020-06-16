#pragma once
#include "Furniture.h"
class Bed :
	virtual public Furniture
{
public:
	Bed(string name, double longth, double width) :Furniture(name) 
	{
		this->longth = longth;
		this->width = width;
	}
	void Edit(string name, double longth, double width);
	void Intro();
protected:
	double longth;
	double width;
};

