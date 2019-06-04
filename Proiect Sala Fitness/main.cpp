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
       do
        {
        cout << "1. Adauga instructor" << endl;
        cout << "2. Sterge instructor" << endl;
        cout << "3. Afiseaza ore instructor" << endl;
        cout << "4. Adauga client" << endl;
        cout << "5. Sterge client" << endl;
        cout << "6. Iesire" << endl;
        cout << endl;


        cin >> indexMenu;
          while (indexMenu < 1 || indexMenu > 6 || !cin)
                {
                    cin.clear();
                    cin.ignore(200, '\n');
                    cout << "Va rugam alegeti o optiune valida" << endl;
                    cin >>indexMenu;
                }
        switch (indexMenu)
            {
            case 1:
                {
                    system("CLS");
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
                    system("CLS");
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
                instructor.writeInstructor();
            }
                        break;
            }
        }while (indexMenu != 6);


       return 0;
}
