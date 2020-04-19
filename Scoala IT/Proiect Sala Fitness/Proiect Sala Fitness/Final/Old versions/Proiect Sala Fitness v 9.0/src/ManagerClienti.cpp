#include "ManagerClienti.h"
#include "ManagerInstructori.h"
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

ManagerClienti::ManagerClienti()
{
    //ctor
}

ManagerClienti::~ManagerClienti()
{
    //dtor
}


void ManagerClienti::loadClients()  // load vector from file
{
    string numeClient;
    string categorie;
    short oreClient;
    short instructorIndex;

ifstream readFromFile("Lista Clienti.txt");
    while (readFromFile >> numeClient >> categorie >> oreClient >> instructorIndex)
    {

       Client Mike {numeClient, categorie, oreClient, instructorIndex};
       listaClienti.push_back(Mike);
    }
}

void ManagerClienti::displayClients()       // display client list from vector
{
    for (int index = 0; index < listaClienti.size(); index++)
        {
            cout << index << "      ";
            cout << listaClienti[index].getNumeClient() << "                      " << listaClienti[index].getCategorie() << "                         " << listaClienti[index].getOreClient() << listaClienti[index].getInstructorIndex() << endl;
        }

}

 void ManagerClienti::writeClients()        // write clients to file
{
    ofstream write2file ("Lista Clienti.txt");
    for (int index = 0; index < listaClienti.size(); index++)
    {
        ofstream write2file ("Lista Clienti.txt", ios::out | ios::app);
         write2file << listaClienti[index].getNumeClient()  << " " << listaClienti[index].getCategorie() << " " << listaClienti[index].getOreClient() << " " << listaClienti[index].getInstructorIndex() << endl;
         write2file.close();
    }
}



void ManagerClienti::setNumeClient() // setter name
{
    cout << "Introduceti nume Client" << endl;
    cin >> numeClient;
}

void ManagerClienti::setCategorie() // setter categorie
{
    cout << "Selectati categoria :" << endl;
    cout << "1. Adult" << endl;
    cout << "2. Elev" << endl;
    cout << "3. Student" << endl;
    cout << "0. Revenire la ecranunl anterior" << endl;
    short index = 0;
    cin >> index;
    switch (index)
    {
        {
            case 1: categorie = "Adult";
        }
            break;

        {
            case 2: categorie = "Elev";
        }
            break;
        {
            case 3: categorie = "Student";
        }
            break;
            // default
    }
}

void ManagerClienti::setOreClient()     // setter ore
{
    cout << "Precizati numarul de ore/saptamana dorit - intre 1 si 5 ore" << endl;
    cin >> oreClient;
    while (oreClient < 1 || oreClient > 5 || (isalpha(oreClient)))
    {
        cout << "Precizati un numar de ore/saptamana intre 1 si 5" << endl;
        cin >> oreClient;
        cin.clear();
        cin.ignore(100, '\n');
        // improve imput validation - 3f is passing
    }


}

void ManagerClienti::setInstructorIndex()   // tie with instructor index + update Instructor hours
{
    int index;
    short ore;
    cout << "Selectati Instructorul " << endl;
    cout << "Index " << "   Nume Instructor            " << " Ore                  " << " Cod Unic " << endl;
            for (int index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
                {
                    if (ManagerInstructori::listaInstructori[index].getOre() > 40)
                        {
                            continue;
                        }
                cout << index << "      ";
                cout << ManagerInstructori::listaInstructori[index].getNumeInstructor() << "                      " << ManagerInstructori::listaInstructori[index].getOre() << "                         " << ManagerInstructori::listaInstructori[index].getCodUnic() << endl;
                }
validate:
    cin >> index;
    ore = ManagerInstructori::listaInstructori[index].getOre();
    short totalOre = ore + oreClient;

        if(totalOre >= 40)
    {
        system("CLS");
        cout << "Ne pare rau. Acest instructor nu mai are locuri disponibile." << endl; // resetare displayInstructor - index
        cout << "Alegeti un alt instructor." << endl;
        cout << "Index " << "   Nume Instructor            " << " Ore                  " << " Cod Unic " << endl;
                        for (int index2 = 0; index2 < ManagerInstructori::listaInstructori.size(); index2++)
                {
                    if (index2 == index || ManagerInstructori::listaInstructori[index2].getOre() > 40) continue;
                       cout << index2 << "      ";
                       cout << ManagerInstructori::listaInstructori[index2].getNumeInstructor() << "                      " << ManagerInstructori::listaInstructori[index2].getOre() << "                         " << ManagerInstructori::listaInstructori[index2].getCodUnic() << endl;
                }
        goto validate;
    }



                cout << "Abonament inregistrat" << endl;
                ManagerInstructori::listaInstructori[index].setOre(totalOre);
                instructorIndex = ManagerInstructori::listaInstructori[index].getCodUnic();
                cout << ManagerInstructori::listaInstructori[index].getOre() << endl; // test

}

void ManagerClienti::addClient()        // add client
{
         setNumeClient();
         setCategorie();
         setOreClient();
         setInstructorIndex();

         Client Mike {numeClient, categorie, oreClient, instructorIndex};
         listaClienti.push_back(Mike);
         writeClients();


}

void ManagerClienti::displayInstructor()    // display instructor list
{
        cout << "Index" << " Nume Instructor            " << " Ore                  " << " Cod Unic " << endl;
    for (int index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
    {
        cout << index << "      ";
        cout << ManagerInstructori::listaInstructori[index].getNumeInstructor() << "                      " << ManagerInstructori::listaInstructori[index].getOre() << "                         " << ManagerInstructori::listaInstructori[index].getCodUnic() << endl;
    }

