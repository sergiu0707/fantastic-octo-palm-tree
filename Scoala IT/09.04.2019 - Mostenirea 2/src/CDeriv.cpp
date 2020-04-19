#include "CDeriv.h"
#include <iostream>
using namespace std;

CDeriv::CDeriv()
{
   cout << "Ctor default CDeriv" << endl;
}
CDeriv::CDeriv(double parDbl)
:CBaza(parDbl)
{cout << "Ctor cu parametru CDeriv" << endl;}

CDeriv::~CDeriv()
{
    //dtor
}

void CDeriv :: Afisez()
{
    cout << "Ai apelat metoda Afisez din clasa CDeriv" << endl;
}
