#include "Instrument.h"
#include <iostream>

using namespace std;


Instrument::Instrument()
{
    //ctor
}

Instrument::~Instrument()
{
    cout << "Dtor Instrument" << endl;
}


void Instrument::RedaNota()
{
    cout << "Instrument " << endl;
}
