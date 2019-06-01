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
        void checkOreInstructor();
        void setNumeClient();
        void setEmail();
        void setTelefon();
        void setOreClient();






    private:
        std::vector<Client>listaClienti;
        std::string numeClient;
        std::string email;
        std::string telefon;
        short oreClient;




};

#endif // MANAGERCLIENTI_H
