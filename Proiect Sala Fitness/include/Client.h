#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>


class Client
{
    public:
        Client();
        virtual ~Client();
        Client(std::string, std::string, short, short);
        std::string getNumeClient() {return numeClient;}
        std::string getCategorie(){return categorie;}
        short getOreClient() {return oreClient;}
        short getInstructorIndex() {return instructorIndex;}


    private:
        std::string numeClient;
        std::string categorie;
        short oreClient;
        short instructorIndex;

};

#endif // CLIENT_H
