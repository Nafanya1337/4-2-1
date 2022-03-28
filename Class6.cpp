#include "Class6.h"
#include <iostream>

Class6::Class6(string name) : Class2(name), Class3(name), Class1(name)
{
	cout << "Class6:" << this << endl;
	this->name = name + "_6";
}