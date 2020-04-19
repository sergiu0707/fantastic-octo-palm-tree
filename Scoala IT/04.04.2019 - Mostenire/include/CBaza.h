#ifndef CBAZA_H
#define CBAZA_H


class CBaza
{
    public:
        CBaza();
        CBaza(double);
        virtual ~CBaza();
        void Afisez();
        void ScriuText(char* );

    protected:

    private:
        double mDbl;
};

#endif // CBAZA_H
