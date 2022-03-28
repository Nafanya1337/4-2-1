#include "Class3.h"
#include <iostream>

Class3::Class3(string name) : Class1(name)
{
	cout << "Class3:" << this << endl;
	this->name = name + "_3";
}