#include "Class8.h"
#include <iostream>

Class8::Class8(string name) : Class6(name), Class7(name), Class6::Class1(name)
{
	cout << "Class8:" << this << endl;
	this->name = name + "_8";
}