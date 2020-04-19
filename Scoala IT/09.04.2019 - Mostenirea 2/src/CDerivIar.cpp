#include "CDerivIar.h"
#include <iostream>

using namespace std;
CDerivIar::CDerivIar()
{
    cout << "Ctor default CDerivIar" << endl;
}

CDerivIar::CDerivIar(double parDbl)
:CDeriv(parDbl)
{
    cout << "Ctor cu parametru CDerivIar" << endl;
}

CDerivIar::CDerivIar(double parDbl, int parInt)
:CDeriv(parDbl), mInt(parInt)
{
 //mInt = parInt; ?
 cout <<"Ctor cu doi param CDerivIar" << endl;

}

void CDerivIar :: Afisez()
{
    cout << "Ai apelat metoda Afisez din clasa CDerivIar" << endl;
   // CBaza :: ScriuText("Hi pops");
}

void CDerivIar::ScriuText(char* textDeScris)
{
    cout << textDeScris << " mInt = " << mInt << " ";
    CBaza::ScriuText(textDeScris);
}

CDerivIar::~CDerivIar()
{
    //dtor
}
