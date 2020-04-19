#include "Ser.h"
#include "ostream"
using namespace std;

Ser::Ser()
{
    //ctor
}

Ser::~Ser()
{
    //dtor
}

Ser::Ser(int i1, int i2, char c, double d)
    //sau
    // :mInt1{i1}, mInt{i2} .... etc
{
        mInt1 = i1;
        mInt2 = i2;
        mChar = c;
        mDbl = d;

}

void Ser::Export(ostream& out)
{
    out << mInt1 << " " << mInt2 << " " << mChar << " " << mDbl;

}
