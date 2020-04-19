#include "ManagerInstructori.h"
#include <iostream>
using namespace std;

ManagerInstructori::ManagerInstructori()
{


}

ManagerInstructori::~ManagerInstructori()
{
    //dtor
}


 void  addToVector(Instructor param1)
 {
     listaInstructori.push_back(param1);
 }

