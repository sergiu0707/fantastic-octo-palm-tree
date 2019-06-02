#include "ManagerClienti.h"
#include "ManagerInstructori.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
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
            cout << index << setw(15);
            cout << listaClienti[index].getNumeClient() << setw(15) << listaClienti[index].getCategorie() << setw(15) << listaClienti[index].getOreClient() << setw(15) << listaClienti[index].getInstructorIndex() << endl;
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
    system("CLS");
}

void ManagerClienti::setCategorie() // setter categorie
{
    cout << "Selectati categoria :" << endl;
    cout << "1. Adult" << endl;
    cout << "2. Elev" << endl;
    cout << "3. Student" << endl;
    cout << "0. Revenire la ecranunl anterior" << endl;
    short index = 0;
    do
    {
    cin >> index;
    cout << "Optiune invalida" << endl;

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

            case 0: break;
    }
    }while (index < 0 || index > 3);

    system("CLS");
}


void ManagerClienti::setOreClient()     // setter ore
{
    cout << "Precizati numarul de ore/saptamana dorit - intre 1 si 5 ore" << endl;
    cin >> oreClient;
    while (oreClient < 1 || oreClient > 5 || !cin)
    {
        cout << "Precizati un numar de ore/saptamana intre 1 si 5" << endl;
        cin >> oreClient;
        cin.clear();
        cin.ignore(100, '\n');
        // improve imput validation - 3f is passing
    }
    system("CLS");

}

void ManagerClienti::setInstructorIndex()   // tie with instructor index + update Instructor hours
{
    int index;
    short ore;
    cout << "Selectati Instructorul " << endl;
    cout << "Index" << setw(18) << "Nume Instructor" << setw(13) << "Ore" << setw(15) << "Cod Unic" << endl;
            for (int index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
                {
                    if (ManagerInstructori::listaInstructori[index].getOre() > 40)
                        {
                            continue;
                        }
                cout << index << setw(15);
                cout << ManagerInstructori::listaInstructori[index].getNumeInstructor() << setw(19) << ManagerInstructori::listaInstructori[index].getOre() << setw(13) << ManagerInstructori::listaInstructori[index].getCodUnic() << endl;
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
        cout << "Index" << setw(15) << "Nume Instructor" << setw(15) << "Ore" << setw(15) << "Cod Unic" << endl;
                        for (int index2 = 0; index2 < ManagerInstructori::listaInstructori.size(); index2++)
                {
                    if (index2 == index || ManagerInstructori::listaInstructori[index2].getOre() > 40) continue;
                       cout << index2 << setw(15);
                       cout << ManagerInstructori::listaInstructori[index2].getNumeInstructor() << setw(15) << ManagerInstructori::listaInstructori[index2].getOre() << setw(15) << ManagerInstructori::listaInstructori[index2].getCodUnic() << endl;
                }
        goto validate;
    }



                cout << "Abonament inregistrat" << endl;
                ManagerInstructori::listaInstructori[index].setOre(totalOre);
                instructorIndex = ManagerInstructori::listaInstructori[index].getCodUnic();
                system("pause");
                system("CLS");
                //cout << ManagerInstructori::listaInstructori[index].getOre() << endl; // test

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

void ManagerClienti::displayInstructor()    // display instructor list - maybe delete
{
        cout << "Index" << setw(15) << "Nume Instructor" << setw(15) << "Ore" << setw(15) << "Cod Unic" << endl;
    for (int index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
    {
        cout << index << setw(18);
        cout << ManagerInstructori::listaInstructori[index].getNumeInstructor() << setw(15) << ManagerInstructori::listaInstructori[index].getOre() << setw(15) << ManagerInstructori::listaInstructori[index].getCodUnic() << endl;
    }
}

 void ManagerClienti::deleteClient()
 {
    short index;
    cout << "Alege indexul clientului de sters" <<  endl;
    displayClients();
    cin >> index;
    listaClienti.erase (listaClienti.begin()+index);
    writeClients();
    cout << "Clientul a fost sters" << endl;
    system("pause");
    system("CLS");

 }

  void ManagerClienti::info()
  {
      int index;
      int index2;
      cout << setw(15) <<"Instructor" << setw(35) <<  "Ore Total Instructor" << setw(22) << "Categorie"<< setw(24) << "Ore Client" <<endl;
      for (index = 0; index < ManagerInstructori::listaInstructori.size(); index++)
        {
             cout << setw(15) << ManagerInstructori::listaInstructori[index].getNumeInstructor() << setw(35) << ManagerInstructori::listaInstructori[index].getOre()<< endl;
             //cout << setw(25) << "Client" << endl;
          for (index2 = 0; index2 < listaClienti.size(); index2++)
          {

            if (ManagerInstructori::listaInstructori[index].getCodUnic() != listaClienti[index2].getInstructorIndex())
            {
                continue;
            }
                cout << setw(25) << listaClienti[index2].getNumeClient() << setw(45) << listaClienti[index2].getCategorie() << setw(24) << listaClienti[index2].getOreClient() << endl;
          }
        }
    system("pause");
    system("CLS");
  }




