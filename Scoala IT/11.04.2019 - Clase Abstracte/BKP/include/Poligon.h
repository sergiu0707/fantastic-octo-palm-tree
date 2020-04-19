#ifndef POLIGON_H
#define POLIGON_H


class Poligon
{
    public:
        Poligon(unsigned int, double*);
        virtual ~Poligon();
        virtual double Arie() = 0;
        double Perimetru();

    protected:
        double* lungimiLaturi;

    private:
        unsigned int nrLaturi;
};

#endif // POLIGON_H
