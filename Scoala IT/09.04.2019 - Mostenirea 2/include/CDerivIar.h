#ifndef CDERIVIAR_H
#define CDERIVIAR_H
#include <CDeriv.h>

class CDerivIar : public CDeriv
{
    public:
        CDerivIar();
        CDerivIar(double);
        CDerivIar(double, int);
        void Afisez();
        void ScriuText(char*);

        virtual ~CDerivIar();

    protected:

    private:
        int mInt;
};

#endif // CDERIVIAR_H
