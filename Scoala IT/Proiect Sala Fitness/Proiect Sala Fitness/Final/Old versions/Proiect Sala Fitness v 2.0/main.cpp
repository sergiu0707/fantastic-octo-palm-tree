#include <iostream>
#include "Instructor.h"
#include "ManagerInstructori.h"

using namespace std;

int main()
{

        int indexMenu;
        cout << "1. Adauga instructor" << endl;
        cout << "2. Sterge instructor" << endl;
        cout << "3. Afiseaza ore instructor" << endl;
        cout << "4. Adauga client" << endl;
        cout << "5. Sterge client" << endl;
        cout << "6. Iesire" << endl;

        cin >> indexMenu;

        switch (indexMenu)
        {
            case 1: Instructor john;


            // Idea 1: add object john to "vector <Instructor> listaInstructori;" from class ManagerInstructori
            // OR
            // Idea 2: move "vector <Instructor> listaInstructori;" from class ManagerInstructori to class "Instructor" then add object john -> also delete class ManagerInstructori.
            break;









            break;
        }




       return 0;
}
