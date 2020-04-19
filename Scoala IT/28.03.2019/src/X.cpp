#include "X.h"
#include <iostream>
using namespace std;


X::X(): a{10}, b{20}, c{30}
{

}

X::~X()
{
    //dtor
}

X::X(const X& s)
{a = 2 * s.a;
b = 2 * s.b;
c = 2 * s.c;}

void X::Print()
{
    cout << a << " " << b << " " << c << " " << endl;
}


//sau a{2 * s.a}
//b{2 * s.b} etc
