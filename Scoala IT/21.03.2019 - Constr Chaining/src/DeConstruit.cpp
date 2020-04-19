#include "DeConstruit.h"
#include <iostream>
using namespace std;

DeConstruit::DeConstruit()
{
    membruChar = 0;
    membruDouble = 0;
    membruBool = false;
}

//DeConstruit::DeConstruit(char cc) { membruChar = cc;}
//DeConstruit::DeConstruit(double dd) { membruDouble = dd;} //constructor nu trebuie in fisierul .h (header)

DeConstruit::DeConstruit(char cc):DeConstruit()
{
    membruChar = cc;
}

DeConstruit::DeConstruit(double cc):DeConstruit()
{
    membruDouble = cc;
}


DeConstruit::DeConstruit(char cc, bool dd):DeConstruit(cc)
{
     membruBool = dd;
}

DeConstruit::DeConstruit(char cc, double dd, bool ee ):DeConstruit(cc, dd)
{
     membruDouble = dd;
}




//DeConstruit::DeConstruit(char ee, bool ff)
//{
//    membruChar = ee;
//    membruBool = ff;
//}

//DeConstruit::DeConstruit(char gg, double hh, bool ii)
//{
//    membruChar = gg;
//    membruDouble = hh;
//    membruBool = ii;
//}




DeConstruit::~DeConstruit()
{
    //dtor
}

void DeConstruit::TipMembri()
{
    cout << "Membru Char " << membruChar << endl;
    cout << "Membru Double " << membruDouble << endl;
    cout << "Membru Bool " << membruBool << endl;
    cout << "_______________________" << endl;
}
