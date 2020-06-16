#pragma once
#include <string>
using namespace std;
class Furniture
{
public:
	Furniture(string name)
	{
		this->name = name;
	};
	void Edit(string name);
	void Intro();
protected:
	string name;
};

