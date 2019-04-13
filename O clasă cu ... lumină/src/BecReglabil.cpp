#include "BecReglabil.h"
#include <iostream>
using namespace std;


BecReglabil::BecReglabil(unsigned short putereMaxima, unsigned short putereCurenta)
{
    _putereMaxima = putereMaxima;
    _putereCurenta  = putereCurenta;
    (_putereCurenta == 0)?_aprins = 0:_aprins = 1;
}

BecReglabil::~BecReglabil()
{
    //dtor
}

void BecReglabil::Aprinde()
{
    _aprins = 1;
    _putereCurenta = _putereMaxima;

}

void BecReglabil::Stinge()
{
    _aprins = 0;
    _putereCurenta = 0;

}

void BecReglabil::ReduceLumina(unsigned short param1)
{
    _putereCurenta -= param1;
    if (_putereCurenta < 0)
    {
        _putereCurenta = 0;
        _aprins = 0;
    } else if (_putereCurenta == 0)
            {
                _aprins = 0;
            }
}

void BecReglabil::MaresteLumina(unsigned short param1)

{
    _putereCurenta += param1;
    if (_putereCurenta > _putereMaxima)
    {
        _putereCurenta = _putereMaxima;
        _aprins = 1;
    }
}




void BecReglabil::StareBec()
{
    (_aprins == 0)? cout << "Becul e stins" << endl : cout << "Becul e aprins" << endl;
}

