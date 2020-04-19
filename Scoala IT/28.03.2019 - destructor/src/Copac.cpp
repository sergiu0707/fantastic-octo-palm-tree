#include "Copac.h"
#include <iostream>
using namespace std;

Copac::Copac(int inaltimeInit)
{
    cout << "In constructor" << endl;
    inaltime = inaltimeInit;
    TipInaltime();
}

Copac::~Copac()
{
    cout << "In destructor ";
    TipInaltime();
}

void Copac::TipInaltime()
{
    cout << "Inaltimea copacului e " << inaltime << endl;
}

void Copac::Creste(int crestere)
{
    inaltime += crestere;
}
