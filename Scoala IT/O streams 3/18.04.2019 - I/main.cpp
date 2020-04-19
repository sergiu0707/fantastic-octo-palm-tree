#include <iostream>
#include "Ser.h"
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    Ser o1{1, 11, 'A', 0.1},
        o2{2, 22, 'B', 0.2},
        o3{3, 33, 'C', 0.3},
        o4{4, 44, 'D', 0.4};

ofstream outFisOb("New File - Ser.txt");

o1.Export(outFisOb);
outFisOb << endl;
o2.Export(outFisOb);
outFisOb << endl;
o3.Export(outFisOb);
outFisOb << endl;
o4.Export(outFisOb);
outFisOb.close();

ifstream inFisOb("New File - Ser.txt");
unsigned short nrLinii = 0;
while(!inFisOb.eof())
    {
        char buff[20];
        inFisOb.getline(buff, 20); // mai poate avea al 3-lea param pentru a specifica unde sa se opreasca - de ex la spatiu, punct, etc.
        nrLinii++;
    }
inFisOb.seekg(0);
Ser obSer[nrLinii]{}; // acoladele initializeaza membrii pe 0
unsigned short indexOb = 0;
while(!inFisOb.eof())
{
    char buff[20];
    inFisOb.getline(buff, 20);
    stringstream ss;
    ss << buff;
    int i1, i2;
    char c;
    double d;

    ss >> i1 >> i2 >> c >> d;
    Ser obj1 {i1, i2, c, d};
    obSer[indexOb] = obj1; // -> see shallow copy de ce am creat un ob temporar si nu am copiat direct valorile.
    indexOb++;
}
    for(int index = 0; index < nrLinii; index++)
    {
        obSer[index].Export(cout);
        cout << endl;

    }

    return 0;
}
