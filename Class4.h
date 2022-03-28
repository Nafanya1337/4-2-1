#pragma once
#include "Class1.h"

class Class4 : public Class1
{
public:
	Class4(string name);
	string GetName() { return name; }
private:
	string name;
};

