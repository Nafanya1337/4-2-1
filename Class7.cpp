#include "Class7.h"
#include <iostream>


Class7::Class7(string name) : Class4(name), Class5(name)
{
	cout << "Class7:" << this << endl;
	this->name = name + "_7";
}