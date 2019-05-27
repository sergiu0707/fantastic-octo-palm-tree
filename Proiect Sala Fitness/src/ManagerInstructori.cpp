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

}

void ManagerInstructori::writeInstructor()
{

}


// clasa pt add si stergere instructori


//  void  addToVector(Instructor param1)
// {
//     listaInstructori.push_back(param1);
// }

