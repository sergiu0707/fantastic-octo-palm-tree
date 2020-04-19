#include "Ecstatic.h"
#include <iostream>
using namespace std;

int Ecstatic::mStatic = 0;


Ecstatic::Ecstatic()
{
    //ctor
}

Ecstatic::~Ecstatic()
{
    //dtor
}

void Ecstatic::AfiseazaStatic()
{
    cout << mStatic << endl;
}

void Ecstatic::AfiseazaNeStatic()
{
    cout << mNorm << endl;
}

void Ecstatic::AtribuieMembri(int val)
{
    mNorm = val;
    mStatic = val * 10;



}

