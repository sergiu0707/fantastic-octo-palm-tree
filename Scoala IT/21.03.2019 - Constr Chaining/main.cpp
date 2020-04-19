#include <iostream>
#include "DeConstruit.h"
using namespace std;

int main()
{

    DeConstruit Constr1, Constr2{'s'}, Constr3{3.14}, Constr4{'c',true}, Constr5{'d', 22.22, false};
    Constr1.TipMembri();
    Constr2.TipMembri();
    Constr3.TipMembri();
    Constr4.TipMembri();
    Constr5.TipMembri();

    DeConstruit *hob = new DeConstruit{'s',9.99, true};
    hob -> TipMembri();
    return 0;
}
