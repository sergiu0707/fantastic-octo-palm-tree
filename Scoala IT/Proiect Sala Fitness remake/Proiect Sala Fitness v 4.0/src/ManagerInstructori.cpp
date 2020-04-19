#include "ManagerInstructori.h"
#include "Instructor.h"
#include <iostream>
#include <vector>
using namespace std;

ManagerInstructori::ManagerInstructori()
{


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


// clasa pt add si stergere instructori


//  void  addToVector(Instructor param1)
// {
//     listaInstructori.push_back(param1);
// }

