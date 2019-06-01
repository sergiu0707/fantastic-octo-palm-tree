#include "ManagerInstructori.h"
#include "Instructor.h"
#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

ManagerInstructori::ManagerInstructori()
{

}

ManagerInstructori::~ManagerInstructori()
{
    //dtor
}



void ManagerInstructori::loadInstructor()
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


void ManagerInstructori::addInstructor()
{

        // move methods from class instructor for getting info to class ManagerInstructor
    Instructor Jack;
    listaInstructori.push_back(Jack);
    ofstream write2file ("Lista Instructori.txt", ios::out | ios::app);
    write2file << Jack.getNumeInstructor()<< " " << Jack.getOre()<< " " << Jack.getCodUnic()<< "\n";
    write2file.close();
    //cout << listaInstructori.size() << endl;

}

void ManagerInstructori::displayInstructor()
{
        cout << "Index" << " Nume Instructor            " << " Ore                  " << " Cod Unic " << endl;
    for (int index = 0; index < listaInstructori.size(); index++)
    {
        cout << index << "      ";
        cout << listaInstructori[index].getNumeInstructor() << "                      " << listaInstructori[index].getOre() << "                         " << listaInstructori[index].getCodUnic() << endl;
    }
}

void ManagerInstructori::deleteInstructor()
{
    short index;
    cout << "Alege indexul instructorului de sters" <<  endl;
    cin >> index;
    listaInstructori.erase (listaInstructori.begin()+index);
    ofstream write2file ("Lista Instructori.txt");
    for (int index = 0; index < listaInstructori.size(); index++)
    {
        cout << index << "      ";
        cout << listaInstructori[index].getNumeInstructor() << "                      " << listaInstructori[index].getOre() << "                         " << listaInstructori[index].getCodUnic() << endl;

        ofstream write2file ("Lista Instructori.txt", ios::out | ios::app);
        write2file << listaInstructori[index].getNumeInstructor()<< " " << listaInstructori[index].getOre()<< " " << listaInstructori[index].getCodUnic()<< "\n";
        write2file.close();
    }



}







