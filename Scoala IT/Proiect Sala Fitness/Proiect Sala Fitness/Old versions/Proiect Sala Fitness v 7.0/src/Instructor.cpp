#include "Instructor.h"
#include "ManagerInstructori.h"
#include <iostream>



using namespace std;

Instructor::Instructor()
{

}

Instructor::Instructor(string _numeInstructor, short _ore, short _cod)
{
    numeInstructor = _numeInstructor;
    ore = _ore;
    codUnic = _cod;
}





Instructor::~Instructor()
{
    //dtor
}




