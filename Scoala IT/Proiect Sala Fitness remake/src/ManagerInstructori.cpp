#include "ManagerInstructori.h"
#include "Instructor.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>



using namespace std;

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

void ManagerInstructori::setCodUnic()    // setter code
{

    srand (time(NULL));
    codUnic = rand() % 100 + 1;
    cout << codUnic << endl; // test
}







vector<Instructor>listaInstructori;

void ManagerInstructori::addInstructor()
{
    Instructor John;
    listaInstructori.push_back(John);

}
//ostream & operator << (std::ostream &out, const Instructor & obj);
//	{
//		out << John.numeInstructor << " " <<John.ore << "\n" << John.codUnic << std::endl;
//		return out;
//	}

//void ManagerInstructori::writeInstructor()
//{
//
//}


// clasa pt add si stergere instructori


//  void  addToVector(Instructor param1)
// {
//     listaInstructori.push_back(param1);
// }

