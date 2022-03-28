#pragma once
#include "Class1.h"

class Class3 : public virtual Class1
{
public:
	Class3(string name);
	string GetName() { return name; }
private:
	string name;
};

