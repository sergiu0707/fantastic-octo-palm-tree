#include "Instructor.h"
#include "ManagerInstructori.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

Instructor::Instructor()
{
    setNumeInstructor();
    setCodUnic();
}

Instructor::Instructor(string _numeInstructor, short _ore, short _cod)
{
    numeInstructor = _numeInstructor;
    ore = _ore;
    codUnic = _cod;
}

void Instructor::setNumeInstructor() // setter name
{
    cout << "Introduceti nume instructor" << endl;
    cin >> numeInstructor;
}

void Instructor::setCodUnic()    // setter code
{
    srand (time(NULL));
    codUnic = rand() % 1000 + 1;
    cout << codUnic << endl; // test
}



Instructor::~Instructor()
{
    //dtor
}




