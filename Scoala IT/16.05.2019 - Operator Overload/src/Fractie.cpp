#include "Fractie.h"
using namespace std;

Fractie::Fractie()
:numarator(0), numitor(0){}

Fractie::~Fractie()
{
    //dtor
}

Fractie::Fractie(int p1, int p2)
:numarator(p1), numitor(p2){}

Fractie& Fractie::operator+=(const Fractie& fr)
{
    numarator = numarator * fr.numitor + numitor * fr.numarator;
    numitor *= fr.numitor;
    return *this;
}

Fractie Fractie::operator+(const Fractie& fr)
{
   int nouNumarator = numarator * fr.numitor + numitor * fr.numarator;
    int nouNumitor = nouNumitor * fr.numitor;
    return Fractie(nouNumarator, nouNumitor);
    return *this;
}

bool Fractie::operator>(const Fractie& altaFr)
{
    return numarator * altaFr.numitor > numitor * altaFr.numarator;
}
ostream& operator<<(ostream& out, Fractie& f)
{
    out << f.numarator << "/" << f.numitor;
    return out;
}
istream& operator>>(istream& in, Fractie& f)
{
    in >> f.numarator;
    cout << "/" << endl;
    in >> f.numitor;
    return in;
}
