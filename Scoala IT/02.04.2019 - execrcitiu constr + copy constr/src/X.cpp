#include "X.h"
#include <iostream>
using namespace std;

X::X()
{
    objCount++;
    print("X() ");
}

X::~X()
{
    objCount--;
    print("~X() ");
}

int X::objCount = 0;

void X::print(char* text)
{
    cout << text << " : objectCount = " << objCount << endl;
}
X::X(const X& source) // copy constructor
{
    objCount++;
    print("X(const X& source) ");
}

