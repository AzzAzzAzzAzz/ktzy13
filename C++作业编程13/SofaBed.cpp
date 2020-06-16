#include "SofaBed.h"
using namespace std;
#include<iostream>

void SofaBed::Edit(string name, double longth, double width, int SitNum)
{
	Furniture::Edit(name);
	Bed::Edit(name, longth, width);
	Sofa::Edit(name, SitNum);
}

void SofaBed::Intro()
{
	Furniture::Intro();
	Bed::Intro();
	Sofa::Intro();
}