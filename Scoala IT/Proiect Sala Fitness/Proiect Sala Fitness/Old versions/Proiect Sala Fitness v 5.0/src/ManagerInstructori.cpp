#include "ManagerInstructori.h"
#include "Instructor.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

ManagerInstructori::ManagerInstructori()
{

// salvarea in fisier nume + cod prin metoda - in clasa MangerInstructori
}

ManagerInstructori::~ManagerInstructori()
{
    //dtor
}

vector<Instructor>listaInstructori;

void ManagerInstructori::loadInstructor()
{
ifstream readFromFile("Lista Instructori.txt");
    unsigned short nrLinii = 0;
        while(readFromFile.eof())
        {
        char buff[50];
        readFromFile.getline(buff, 50);
        nrLinii++;
        }
//
        readFromFile.seekg(0);
Instructor John[nrLinii]{}; // acoladele initializeaza membrii pe 0
unsigned short indexOb = 0;
while(readFromFile.eof())
    {
    char buff[50];
    readFromFile.getline(buff, 50);
    stringstream ss;
    ss << buff;
    string numeInstructor;
    short ore;
    short cod;

    ss >> numeInstructor >> ore >> cod;
    Instructor obj1{numeInstructor, ore, cod};
    John[indexOb] = obj1; // -> see shallow copy de ce am creat un ob temporar si nu am copiat direct valorile.
    indexOb++;
    cout << "new object" << endl;
//    listaInstructori.push_back(John);
    }
}

void ManagerInstructori::addInstructor()
{

//

    Instructor Jack;
    listaInstructori.push_back(Jack);
    ofstream write2file ("Lista Instructori.txt", ios::out | ios::app);
    write2file << Jack.getNumeInstructor()<< " " << Jack.getOre()<< " " << Jack.getCodUnic()<< "\n";
    write2file.close();


}
//ostream & operator << (std::ostream &out, const Instructor & obj);
//	{
//		out << John.numeInstructor << " " <<John.ore << "\n" << John.codUnic << std::endl;
//		return out;
//	}



// clasa pt add si stergere instructori


//  void  addToVector(Instructor param1)
// {
//     listaInstructori.push_back(param1);
// }

