#pragma once
#include "Class1.h"

class Class5 : public Class1
{
public:
	Class5(string name);
	string GetName() { return name; }
private:
	string name;
};

