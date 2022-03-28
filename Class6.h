#pragma once
#include "Class2.h"
#include "Class3.h"

class Class6 : public Class2, public Class3
{
public:
	Class6(string name);
	string GetName() { return name; }
private:
	string name;
};

