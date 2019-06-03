#include "ManagerInstructori.h"
#include "Instructor.h"
#include<iomanip>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>


using namespace std;

vector<Instructor>ManagerInstructori::listaInstructori;

ManagerInstructori::ManagerInstructori()
{

}

ManagerInstructori::~ManagerInstructori()
{
    //dtor
}

void ManagerInstructori::setNumeInstructor() // setter name
{
    cout << "Introduceti nume instructor" << endl;
    cin >> numeInstructor;
    system("CLS");

}

void ManagerInstructori::setCodUnic()    // setter cod unic
{
    srand (time(NULL));
    codUnic = rand() % 1000 + 1;
}



void ManagerInstructori::loadInstructor()       // read instructor from file
{
    string nume;
    short ore;
    short cod;

ifstream readFromFile("Lista Instructori.txt");
    while (readFromFile >> nume >> ore >> cod)
    {

       Instructor John{nume, ore, cod};
       listaInstructori.push_back(John);
    }
}




void ManagerInstructori::addInstructor()       // add instructor + write to file
{
         setNumeInstructor ();
         setCodUnic ();
         Instructor Jack{numeInstructor, ore, codUnic};
    listaInstructori.push_back(Jack);
    writeInstructor();
    cout << "Instructorul a fost adaugat" << endl;
    cout << "Alegeti o alta optiune" << endl;
}

void ManagerInstructori::displayInstructor()    // display instructor list
{
        cout << "Index" << setw(25) << "Nume Instructor" << setw(25) << "Ore" << setw(25) << "Cod Unic" << endl;
    for (int index = 0; index < listaInstructori.size(); index++)
    {
        cout << index << setw(25) << listaInstructori[index].getNumeInstructor() << setw(25) << listaInstructori[index].getOre() << setw(25) << listaInstructori[index].getCodUnic() << endl;
    }
}

void ManagerInstructori::deleteInstructor()     // display instr + delete + update file
{
    short index;
    cout << "Alege indexul instructorului de sters" <<  endl;
    displayInstructor();
    cin >> index;
    while(index >= listaInstructori.size() || index < 0 || !cin)
    {
        validate();
        cout << "Alegeti un index valid" << endl;
        cin >> index;
    }
    listaInstructori.erase (listaInstructori.begin()+index);
    writeInstructor();
    cout << "Instructorul " << index <<" a fost sters" << endl;
    system("pause");
    system("CLS");
}


    void ManagerInstructori::writeInstructor()
{
    ofstream write2file ("Lista Instructori.txt");
    for (int index = 0; index < listaInstructori.size(); index++)
    {
        ofstream write2file ("Lista Instructori.txt", ios::out | ios::app);
        write2file << listaInstructori[index].getNumeInstructor()<< " " << listaInstructori[index].getOre()<< " " << listaInstructori[index].getCodUnic()<< "\n";
        write2file.close();
    }

}

void ManagerInstructori::validate()
{
    cin.clear();
    cin.ignore(200, '\n');
}








