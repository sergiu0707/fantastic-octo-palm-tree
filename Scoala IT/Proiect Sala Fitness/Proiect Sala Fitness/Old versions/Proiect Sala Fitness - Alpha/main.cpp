#include <iostream>
#include "Instructor.h"
#include "ManagerInstructori.h"
#include "Client.h"
#include "ManagerClienti.h"

using namespace std;

int main()
{
        ManagerInstructori instructor;
        ManagerClienti client;
        instructor.loadInstructor();
        client.loadClients();



        int indexMenu;
        cout << "1. Adauga instructor" << endl;
        cout << "2. Sterge instructor" << endl;
        cout << "3. Afiseaza ore instructor" << endl;
        cout << "4. Adauga client" << endl;
        cout << "5. Sterge client" << endl;
        cout << "6. Iesire" << endl;
        cout << endl;

        cin >> indexMenu;
        switch (indexMenu)
            {
            case 1:
                {
                    instructor.addInstructor();
                }
                    break;

           case 2:
               {
                    system("CLS");
                    instructor.deleteInstructor();
               }
                    break;
           case 3:
                {
                    client.info();
                }
                    break;
           case 4:
            {
                     system("CLS");
                     client.addClient();
                     instructor.writeInstructor();
            }
                        break;
           case 5:
            {
                system("CLS");
                client.deleteClient();
            }
                        break;




                    //

            //case 2:


            //default:



       }








            // Ideea 1: add object john to "vector <Instructor> listaInstructori;" from class ManagerInstructori
            // OR
            // Ideea 2: move "vector <Instructor> listaInstructori;" from class ManagerInstructori to class "Instructor" then add object john -> also delete class ManagerInstructori.






       return 0;
}
