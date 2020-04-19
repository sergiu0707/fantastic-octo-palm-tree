#include "Dreptunghi.h"
#include "iostream"
using namespace std;

Dreptunghi::Dreptunghi(double* lungLat)
    :Patrulater(lungLat)
{


}

Dreptunghi::~Dreptunghi()
{
    //dtor
}

double Dreptunghi::Arie()
{
    double arie = (lungimiLaturi[0] * lungimiLaturi[1]) / 2;
    cout << "Arie dreptunghiului este " << arie << endl;
    return arie;
}
