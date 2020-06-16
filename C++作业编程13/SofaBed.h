#pragma once
#include "Bed.h"
#include"Sofa.h"

class SofaBed :
	public Bed, public Sofa
{
public:
	SofaBed(string name, double longth, double width, int SitNum) :Furniture(name), Bed(name, longth, width), Sofa(name, SitNum) {}
	void Edit(string name, double longth, double width, int SitNum);
	void Intro();

};

