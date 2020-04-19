#include <iostream>
#include "Vioara.h"
#include "Pian.h"
#include "Flaut.h"
#include "VioaraClasica.h"
#include "VioaraElectrica.h"

using namespace std;

void ObjSlicing(Instrument unu, Instrument* doi, Instrument& trei) // ultima e referinta, semnul & e inainte de numele obiectului
{
    cout << "Prin Valoare: ";
    unu.RedaNota();
    cout << "Prin Adresa: ";
    doi -> RedaNota();
    cout << "Prin Referinta: ";
    trei.RedaNota();
};

int main()
{
    Instrument* instrV = new Vioara();
    Instrument* instrP = new Pian();
    Instrument* instrF = new Flaut();
    Vioara* instrVE = new VioaraElectrica();
    Vioara *instrVC = new VioaraClasica();

    instrV -> RedaNota();
    instrP -> RedaNota();
    instrF -> RedaNota();
    instrVE -> RedaNota();
    instrVC -> RedaNota();
    cout << endl;
cout << "****** Tablout de Instrumente ******" << endl;

Instrument listaInstr[5] {*instrV, *instrP, *instrF, *instrVE, *instrVC}; // lista copii ale obiectelor
Instrument* listaInstr2[5] {instrV, instrP, instrF, instrVE, instrVC}; // lista pointeri
//fara pointeri nu exista polimorfism (sau fara referinte)
for (int index = 0; index < 5; index++)
{
    listaInstr[index].RedaNota();
    listaInstr2[index] -> RedaNota();
}
cout << "********* Apel functie *********" << endl;

ObjSlicing(*instrP, instrP, *instrP); // Primul param e copie

cout << "********* Destructor *********" << endl;
delete instrV;
delete instrP;
delete instrF;
delete instrVE;
delete instrVC;

    return 0;
}
