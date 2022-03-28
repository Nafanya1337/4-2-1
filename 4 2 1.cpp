#include <iostream>
#include "Class8.h"
#include <string>

using namespace std;

int main()
{
    string name;
    cin >> name;
    Class8 obj8(name);
    Class8* ptr = &obj8;
    cout << ptr->Class2::Class1::GetName() << endl;
    cout << ptr->Class4::Class1::GetName() << endl;
    cout << ptr->Class5::Class1::GetName() << endl;
    cout << ptr->::Class2::GetName() << endl;
    cout << ptr->::Class3::GetName() << endl;
    cout << ptr->::Class4::GetName() << endl;
    cout << ptr->::Class5::GetName() << endl;
    cout << ptr->::Class6::GetName() << endl;
    cout << ptr->::Class7::GetName() << endl;
    cout << ptr->::Class8::GetName() << endl;
    return 0;
}
