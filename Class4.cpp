#include "Class4.h"
#include <iostream>

Class4::Class4(string name) : Class1(name)
{
	cout << "Class4:" << this << endl;
	this->name = name + "_4";
}
