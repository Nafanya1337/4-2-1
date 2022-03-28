#include "Class1.h"
#include <iostream>

Class1::Class1(string name)
{
	cout << "Class1:" << this <<name<< endl;
	this->name = name + "_1";
}

//Class1::Class1()
//{
//	cout << "Class1:" << this <<"!!"<< endl;
//}

string Class1::GetName()
{
	return this->name;
}
