#include "Class2.h"
#include <iostream>

Class2::Class2(string name) : Class1(name) 
{
	cout << "Class2:" << this << endl;
	this->name = name + "_2";
}