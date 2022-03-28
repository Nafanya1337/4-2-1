#pragma once
#include "Class4.h"
#include "Class5.h"

class Class7 : public Class4, public Class5
{
public:
	Class7(string name);
	string GetName() { return name; }
private:
	string name;
};

