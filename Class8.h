#pragma once
#include "Class6.h"
#include "Class7.h"

class Class8 : public Class6, public Class7
{
public:
	Class8(string name);
	string GetName() { return name; }
private:
	string name;
};

