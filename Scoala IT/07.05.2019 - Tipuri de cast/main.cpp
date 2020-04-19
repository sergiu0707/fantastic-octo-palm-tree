#include <iostream>

using namespace std;

class Bz
{
public:
    Bz(int p): mBz{p}{} // constructor
    void Tipareste()
        {
            cout << "Bz, mBz = " << mBz << endl;
        }
    virtual void dummy(){}

private:
        int mBz;

};

class Der1 : public Bz
{
public:
    Der1(char pD, int pB): Bz(pB), mD1{pD}{}
    void Tipareste ()
        {
            cout << "Der1, mD1 = " << mD1 << endl;
        }

private:
    char mD1;
};

class Alta
{
    int mDa;
    char mCa;

public:
    Alta(int pA, char pCa): mDa{pA}, mCa{pCa}{}
    void Afiseaza(){cout << "Alta, mDa = " << mDa << "; mCa = " << mCa << endl;}

};

int main()
{
    double d = 65.999;
    char c = d;
    cout << static_cast <char> (d) << "    " << c << endl;
    cout << endl;

    Bz obBz{13};
    Der1 obDer1{'1', 21};
    obDer1.Tipareste();
    Bz * pObDer1CastBz = static_cast<Bz*>(&obDer1);
    cout << endl;
    pObDer1CastBz -> Tipareste();
    cout << endl;
    Der1 * pObBzCastDer1 = static_cast<Der1*>(&obBz);
    pObBzCastDer1 -> Tipareste();
    cout << endl;
    cout << "Dynamic Cast" << endl;
    Bz * pObDer1CastBzDyn = dynamic_cast<Bz*>(&obDer1);
    pObDer1CastBzDyn -> Tipareste();
    cout << endl;
    Der1 * pObBzCastDer1Dyn = dynamic_cast<Der1*>(&obBz);
    if (pObBzCastDer1Dyn != nullptr)
            pObBzCastDer1Dyn -> Tipareste();
        else
            cout << "Bad cast from Bz* to Der1* !" << endl;
    cout << endl;
//    Der1 & refObBzCastDer1Dyn = dynamic_cast<Der1&>(obBz); - EXCEPTIE
//    refObBzCastDer1Dyn.Tipareste();

    Alta obAlt(3, 'Z');
    obAlt.Afiseaza();
    Der1 * pObAltCastDer1Ri = reinterpret_cast<Der1*>(&obAlt);
    pObAltCastDer1Ri ->Tipareste();
    cout << endl;
    Alta obDer1CastAltaRi = * reinterpret_cast<Alta*>(&obDer1);
    obDer1CastAltaRi.Afiseaza();


    return 0;
}
