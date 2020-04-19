#include <iostream>
#include "CtorImplicit.h"
using namespace std;

int main()
{
    CtorImplicit obSt{}; // semnul {} apeleaza constructorul implicit - doar C++ 11 - nu e recomandat
    CtorImplicit *obH1 = new CtorImplicit{};  // semnul {} apeleaza constructorul implicit - doar C++ 11 - nu e recomandat
    CtorImplicit *obH2 = new CtorImplicit();


    cout << obSt.m1 << endl;
    cout << obSt.m2 << endl;
    cout << obSt.m3 << endl;
    cout << endl;
    cout << obH1 ->m1 << endl;
    cout << obH1 ->m2 << endl;
    cout << obH1 ->m3 << endl;
    cout << endl;
    cout << obH2 ->m1 << endl;
    cout << obH2 ->m2 << endl;
    cout << obH2 ->m3 << endl;
    return 0;
}
