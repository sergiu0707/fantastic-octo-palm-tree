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
        void setNumeClient();
        void setOreClient();
        void addClient();
        void setCategorie();
        void setInstructorIndex();

        void loadClients();
        void displayClients();
        void writeClients();
        void displayInstructor();
        void deleteClient();

        void info();
        void validate();


    private:
        std::vector<Client>listaClienti;
        std::string numeClient;
        std::string categorie;
        short instructorIndex;
        short oreClient;




};

#endif // MANAGERCLIENTI_H
