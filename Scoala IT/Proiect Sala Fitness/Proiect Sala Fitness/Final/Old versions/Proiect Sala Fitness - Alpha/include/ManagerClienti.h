#ifndef MANAGERCLIENTI_H
#define MANAGERCLIENTI_H
#include "Client.h"
#include "ManagerInstructori.h"
#include <string>
#include <vector>


class ManagerClienti

{
    public:
        ManagerClienti();
        virtual ~ManagerClienti();
        void checkOreInstructor(); // implement
        void setNumeClient();
        void setEmail();
        void setTelefon();
        void setOreClient();
        void addClient();
        void setCategorie();
        void setInstructorIndex();

        void loadClients();
        void displayClients();
        void writeClients();
        void displayInstructor(); // maybe delete
        void deleteClient();

        void info();








    private:
        std::vector<Client>listaClienti;
        std::string numeClient;
        std::string email;
        std::string telefon;
        std::string categorie;
        short instructorIndex;
        short oreClient;




};

#endif // MANAGERCLIENTI_H
