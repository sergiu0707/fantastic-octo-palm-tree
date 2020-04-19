#ifndef MASINA_H
#define MASINA_H


class Masina
{
    public:
        Masina();
        virtual ~Masina();
        void SetMaxVit (short _maxVit) {maxVit = _maxVit;}
        void SetMaxRez (short _maxRez) {maxRez = _maxRez;}
        void SetBenzinaLeft (short _benzinaLeft) {benzinaLeft = _benzinaLeft;}
        void SetKmTotal (double _kmTotal) {kmTotal = _kmTotal;}
        void SetKmUltim (double _kmUltim) {kmUltim = _kmUltim;}
        void SetAnFabric (short _anFabric) {anFabric = _anFabric;}

        double GetKmTotal() {return kmTotal;}
        short GetAnFabricatie() {return anFabric;}
        float CalculConsum();



    private:
        short maxVit;
        short maxRez;
        short benzinaLeft;
        double kmTotal;
        double kmUltim;
        short anFabric;





};

#endif // MASINA_H
