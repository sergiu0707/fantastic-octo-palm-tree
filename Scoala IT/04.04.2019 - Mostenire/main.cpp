#include <iostream>
#include "CDerivIar.h"
using namespace std;

int main()
{
    CBaza baza;
    CDeriv deriv;
    CDerivIar deriviar;

    deriv.Afisez();
    baza.Afisez();
    deriviar.Afisez();

    CBaza dbaza(2.3);
    dbaza.ScriuText("Cbaza");

    CDeriv dderiv (4.24);
    dderiv.ScriuText("DDeriv");

    CDerivIar dderiviar (2.333);
    dderiviar.ScriuText("DDerivIar");
    return 0;
}
