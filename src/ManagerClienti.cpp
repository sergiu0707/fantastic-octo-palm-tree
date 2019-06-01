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

void ManagerClienti::setNumeClient() // setter name
{
    cout << "Introduceti nume Client" << endl;
    cin >> numeClient;
}

void ManagerClienti::setCategorie()
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
    }
}

void ManagerClienti::setOreClient()
{
    cout << "Precizati numarul de ore/saptamana dorit - intre 1 si 5 ore" << endl;
    cin >> oreClient;
    while (oreClient < 1 || oreClient > 5 || (isalpha(oreClient)))
    {
        cout << "Precizati un numar de ore/saptamana intre 1 si 5" << endl;
        cin >> oreClient;
        cin.clear();
        cin.ignore(100, '\n');
    }


}

void ManagerClienti::setInstructorIndex()
{
    int index;
    short ore = 0;
    cout << "Selectati Instructorul " << endl;
    cout << "Index" << " Nume Instructor            " << " Ore                  " << " Cod Unic " << endl;
    for (int index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
    {
        cout << index << "      ";
        cout << ManagerInstructori::listaInstructori[index].getNumeInstructor() << "                      " << ManagerInstructori::listaInstructori[index].getOre() << "                         " << ManagerInstructori::listaInstructori[index].getCodUnic() << endl;
    }
    cin >> index;
    instructorIndex = ManagerInstructori::listaInstructori[index].getCodUnic();
    ore = ManagerInstructori::listaInstructori[index].getOre();

    short totalOre = ore + oreClient;
    if (totalOre >= 40)
    {
        cout << "Ne pare rau ...." << endl; // resetare displayInstructor - index
    }
    cout << "Abonament inregistrat" << endl;

    ManagerInstructori::listaInstructori[index].setOre(totalOre);
    cout << ManagerInstructori::listaInstructori[index].getOre() << endl;
}

void ManagerClienti::addClient()
{
         setNumeClient();
         setCategorie();
         setOreClient();
         setInstructorIndex();

         Client Mike {numeClient, categorie, oreClient, instructorIndex};
         listaClienti.push_back(Mike);
         ofstream write2file ("Lista Clienti.txt", ios::out | ios::app);
         write2file << Mike.getNumeClient() << " " << Mike.getCategorie() << " " << Mike.getOreClient() << " " << Mike.getInstructorIndex();
         write2file.close();
}
//void ManagerClienti::loadClient()
//{
//    string nume;
//    short ore;
//    short cod;
//
//ifstream readFromFile("Lista Instructori.txt");
//    while (readFromFile >> nume >> ore >> cod)
//    {
//
//       Instructor John{nume, ore, cod};
//       listaInstructori.push_back(John);
//    }
//}


//void ManagerClienti::checkOreInstructor()
//{
//
//
//    for(const auto& elem : ManagerInstructori::listaInstructori) // & -> nu se creeaza copie la element
//    {
//        cout << elem << "\n";
//    }
////    for (int index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
////    {
////
////    }
////    if (ManagerInstructori::listaInstructori)
////    vector<short> v;
////    string nume;
////    short ore;
//    short cod;
//    ifstream readFromFile("Lista Instructori.txt");
//    while (readFromFile >> nume >> ore >> cod)
//    {
//        v.push_back(ore);
//    }
//    if (all_of(v.cbegin(), v.cend(), [](int i){ return i > 40 ;}))
//    {
//        cout << " > 40" << endl;
//    }
//}
