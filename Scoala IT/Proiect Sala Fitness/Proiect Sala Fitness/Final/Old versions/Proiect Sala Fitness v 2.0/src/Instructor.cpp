#include "Instructor.h"
#include "ManagerInstructori.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

Instructor::Instructor()
{
    cout << "Introduceti nume instructor" << endl;
    cin >> numeInstructor;
    srand (time(NULL));
    codUnic = rand() % 100 + 1;
    cout << codUnic << endl; // test


}

Instructor::~Instructor()
{
    //dtor
}



   // listaInstructori.push_back(x);



