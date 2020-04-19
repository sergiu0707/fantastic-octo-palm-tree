#include "Triunghi.h"
#include "iostream"
using namespace std;

Triunghi::Triunghi(double* lungLat)
    :Poligon(3, lungLat)
{
    //ctor
}

Triunghi::~Triunghi()
{
    //dtor
}

double Triunghi::Arie()
{
    cout << "Formula lui Heron" << endl;
}
