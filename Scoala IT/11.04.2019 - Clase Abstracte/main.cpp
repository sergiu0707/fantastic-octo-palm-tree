#include <iostream>
#include "Dreptunghi.h"
#include "TrDrept.h"
#include "Poligon.h"

using namespace std;

void PoligonParser (Poligon& poli) // & e referinta si poate sa creeze obiecte poligon, chiar daca clasa e abstracta = pur virtuala
{
    poli.Perimetru();
    poli.Arie();
}


int main()
{

double latTr[3]{3, 4, 5};
double latPatr[4] {10, 5, 10, 5};

Triunghi Tr{latTr};
TrDrept TrD{latTr};
Dreptunghi Drp{latPatr};

Tr.Perimetru();
Tr.Arie();
TrD.Perimetru();
TrD.Arie();
Drp.Perimetru();
Drp.Arie();

cout << endl;
cout << "*********************" << endl;
cout << endl;

Poligon* vectie[3] {&Tr, &TrD, &Drp};
for (int i = 0; i < 3; i++)
{
    PoligonParser(*vectie[i]);
}

//cout << Tr.Perimetru() << endl;
//cout << Tr.Arie() << endl;
//cout << TrD.Perimetru() << endl;
//cout << TrD.Arie() << endl;
//cout << Drp.Perimetru() << endl;
//cout << Drp.Arie() << endl;





    return 0;
}

