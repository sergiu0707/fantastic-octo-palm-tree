#include <iostream>
#include "Masina.h"

using namespace std;

int main()
{
    Masina Audi; // cu paranteze => metoda sau functie

    Audi.SetMaxVit(223);
    Audi.SetBenzinaLeft(45);
    Audi.SetKmTotal (113543);
    Audi.SetKmUltim(45);
    Audi.SetMaxRez(80);
    Audi.SetAnFabric(2017);

    cout << Audi.GetAnFabricatie() << endl;
    cout << Audi.GetKmTotal() << endl;
    int x = Audi.GetKmTotal(); // pt stocare intro var.

    cout << Audi.CalculConsum() << endl; // metoda merge pe obiect


    return 0;
}
