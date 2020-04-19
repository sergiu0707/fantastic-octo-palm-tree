#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>

class Fractie
{
    public:
        Fractie();
        Fractie(int p1, int p2);
        virtual ~Fractie();
        Fractie& operator+=(const Fractie& f);
        Fractie operator+(const Fractie& f);
        bool operator>(const Fractie& altaFr);
        friend std::istream& operator>>(std::istream& in, Fractie& f);
        friend std::ostream& operator<<(std::ostream& in, Fractie& f);


    protected:

    private:
        int numarator = 0;
        int numitor = 0;
};

#endif // FRACTIE_H
