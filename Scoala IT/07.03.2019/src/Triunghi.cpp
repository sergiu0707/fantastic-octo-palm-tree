#include "Triunghi.h"

float Triunghi::CalcPerimetru() // include clasa triunghi si defineste CalcPerimetru (probabil)
{
    float perim = 0;
    for (int ind = 0; ind < 3; ind++)
    {
        perim += laturi[ind].LungimeSegment(); // returneaza lungimea unui segment
    }
    return perim;
}

bool Triunghi::Isoscel()
{
   for (int ind = 0; ind < 3; ind++)
   {
       if (laturi[ind].LungimeSegment() == laturi[(ind + 1) % 3].LungimeSegment())
                return true;
   }
    return false;

}












Triunghi::Triunghi()
{
    //ctor
}

Triunghi::~Triunghi()
{
    //dtor
}
