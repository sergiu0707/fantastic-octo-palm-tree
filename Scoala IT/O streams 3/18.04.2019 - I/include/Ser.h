#ifndef SER_H
#define SER_H
#include <ostream>


class Ser
{
    public:
        Ser();
        Ser(int, int, char, double);
        virtual ~Ser();

        void Export(std::ostream&);


    protected:

    private:
        int mInt1, mInt2;
        char mChar;
        double mDbl;

};

#endif // SER_H
