#include "CDerivIar.h"
#include <iostream>

using namespace std;
CDerivIar::CDerivIar()
{
    cout << "Ctor default CDerivIar" << endl;
}
CDerivIar::CDerivIar(double parDbl)
:CDeriv(parDbl)
{cout << "Ctor cu parametru CDerivIar" << endl;}


CDerivIar::~CDerivIar()
{
    //dtor
}

void CDerivIar :: Afisez()
{
    cout << "Ai apelat metoda Afisez din clasa CDerivIar" << endl;
   // CBaza :: ScriuText("Hi pops");
}
