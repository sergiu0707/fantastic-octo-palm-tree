#include "Masina.h"

Masina::Masina()
{
    //ctor
}

Masina::~Masina()
{
    //dtor
}

  float Masina::CalculConsum()        // prin :: este o metoda, nu o functie
    {
        return (maxRez - benzinaLeft) * 100 / kmUltim;

    }
