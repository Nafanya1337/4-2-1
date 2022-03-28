#include "Class5.h"
#include <iostream>

Class5::Class5(string name) : Class1(name)
{
	cout << "Class5:" << this << endl;
	this->name = name + "_5";
}