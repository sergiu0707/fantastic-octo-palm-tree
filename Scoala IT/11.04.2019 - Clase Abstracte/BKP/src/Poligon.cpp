#include "Poligon.h"

Poligon::Poligon(unsigned int nL, double* lungLat)
:nrLaturi{nL}
{
    lungimiLaturi = new double[nrLaturi]; // sau nL
    for (int i = 0; i < nrLaturi; i++) // UN POINTER E UN INCEPUT DE TABLOU !!!!
    {
        lungimiLaturi[i] = lungLat[i];
    }
}


double Poligon::Perimetru()
{
    double perim = 0;
    for (int i = 0; i < nrLaturi; i++)
    {
        perim += lungimiLaturi[i];
    }
    return perim;
}


Poligon::~Poligon()
{
    delete[] lungimiLaturi;
    lungimiLaturi = nullptr; // se pune pointerul pe 0

}
