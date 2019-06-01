#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>


class Client
{
    public:
        Client();
        virtual ~Client();
        std::string getNumeClient() {return numeClient;}
        std::string getEmail() {return email;}
        std::string getTelefon() {return telefon;}
        short getOreClient() {return oreClient;}


    private:
        std::string numeClient;
        std::string email;
        std::string telefon;
        short oreClient;

};

#endif // CLIENT_H
