#include "ManagerInstructori.h"
#include "Instructor.h"
#include <iostream>
#include <vector>
#include <fstream>

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

void ManagerInstructori::addInstructor()
{
    Instructor John;
    listaInstructori.push_back(John);
    ofstream write2file ("Lista Instructori.txt", ios::out | ios::app);
    write2file << John.getNumeInstructor()<< " " << John.getOre()<< " " << John.getCodUnic()<< "\n";
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

