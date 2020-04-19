#include <iostream>
#include "Ecstatic.h"
using namespace std;

int main()
{

    Ecstatic so;
    so.AtribuieMembri(10);
    so.AfiseazaNeStatic();
    so.AfiseazaStatic();
    cout << endl;

    Ecstatic soso;
    soso.AtribuieMembri(20);
    soso.AfiseazaNeStatic();
    soso.AfiseazaStatic();
    cout << endl;
    so.AfiseazaNeStatic();
    so.AfiseazaStatic();

//    Doar la static se poate afisa si asa:
      Ecstatic::AfiseazaStatic();

    return 0;
}
