#include "ManagerClienti.h"
#include "ManagerInstructori.h"
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

void ManagerClienti::checkOreInstructor()
{


    if (all_of (ManagerInstructori::listaInstructori.front().getOre(), ManagerInstructori::listaInstructori.back().getOre(),[] (int i) {return i < 40;}))
        {
            cout << "< 40" << endl;
        }

        //cout << ManagerInstructori::listaInstructori[index].getNumeInstructor() << "                      " << ManagerInstructori::listaInstructori[index].getOre() << "                         " << ManagerInstructori::listaInstructori[index].getCodUnic() << endl;
    }

}
