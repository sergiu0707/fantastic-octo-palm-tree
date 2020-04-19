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
    // salvarea in fisier nume + cod prin metoda - in clasa MangerInstructori
}

void Instructor::setNumeInstructor() // setter name
{
    string paramNume;
    cout << "Introduceti nume instructor" << endl;
    cin >> paramNume;
    numeInstructor = paramNume;
}

void Instructor::setCodUnic()    // setter code
{
    short paramCodUnic;
    srand (time(NULL));
    paramCodUnic = rand() % 100 + 1;
    codUnic = paramCodUnic;
    cout << codUnic << endl; // test
}

// metoda salvare
// metoda stergere

Instructor::~Instructor()
{
    //dtor
}




