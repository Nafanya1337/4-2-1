#pragma once
#include "Class1.h"

class Class2 : public virtual Class1
{
public:
	Class2(string name);
	string GetName() { return name; }
private:
	string name;
};

