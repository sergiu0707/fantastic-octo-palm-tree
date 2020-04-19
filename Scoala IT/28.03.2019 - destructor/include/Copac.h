#ifndef COPAC_H
#define COPAC_H
#include <Creanga.h>

class Copac
{
    public:
        Copac(int);
        virtual ~Copac();

    void Creste(int);


    private:

    int inaltime;
    Creanga ram;
    void TipInaltime();
};

#endif // COPAC_H
