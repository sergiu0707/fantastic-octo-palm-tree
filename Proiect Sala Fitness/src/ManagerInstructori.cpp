#include "ManagerInstructori.h"
#include "Instructor.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>


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
}

void ManagerInstructori::setCodUnic()    // setter cod unic
{
    srand (time(NULL));
    codUnic = rand() % 1000 + 1;
    cout << codUnic << endl; // test
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
}

void ManagerInstructori::displayInstructor()    // display instructor list
{
        cout << "Index" << " Nume Instructor            " << " Ore                  " << " Cod Unic " << endl;
    for (int index = 0; index < listaInstructori.size(); index++)
    {
        cout << index << "      ";
        cout << listaInstructori[index].getNumeInstructor() << "                      " << listaInstructori[index].getOre() << "                         " << listaInstructori[index].getCodUnic() << endl;
    }
}

void ManagerInstructori::deleteInstructor()     // display instr + delete + update file
{
    short index;
    cout << "Alege indexul instructorului de sters" <<  endl;
    displayInstructor();
    cin >> index;
    listaInstructori.erase (listaInstructori.begin()+index);
    writeInstructor();
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








