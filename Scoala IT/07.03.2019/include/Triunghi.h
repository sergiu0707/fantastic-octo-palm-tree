#ifndef TRIUNGHI_H
#define TRIUNGHI_H
#include "Segment.h"

class Triunghi
{
    public:
        Triunghi();
        virtual ~Triunghi();

        Segment laturi[3];
        float CalcPerimetru();
        bool Isoscel();

    protected:

    private:
};

#endif // TRIUNGHI_H
