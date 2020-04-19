#include "TrDrept.h"
#include "iostream"
using namespace std;


TrDrept::TrDrept(double* lungLat)
    :Triunghi(lungLat)
{
    //ctor
}

TrDrept::~TrDrept()
{
    //dtor
}

double TrDrept::Arie()
{

    double arie = (lungimiLaturi[0] * lungimiLaturi[1]) / 2;
    cout << "Arie triunghiului dreptunghic este " << arie << endl;
    return arie;
}

