#include "Client.h"

Client::Client()
{
    //ctor
}

Client::~Client()
{
    //ctor
}

Client::Client(std::string _numeClient, std::string _categorie, short _oreClient, short _instructorIndex)
{
    numeClient = _numeClient;
    categorie = _categorie;
    oreClient = _oreClient;
    instructorIndex = _instructorIndex;
}
