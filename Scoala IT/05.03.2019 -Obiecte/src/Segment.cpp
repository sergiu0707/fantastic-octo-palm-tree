#include "Segment.h"
#include <cmath>

float Segment::LungimeSegment()
{
    return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}
Segment Segment::InversulSegmentului()
{
Segment segInv;
segInv.x2 = 2 * x1 - x2; // accesam x2
segInv.y2 = 2 * y1 - y2; // accesam y2
segInv.x1 = x1;
segInv.y1 = y1;
return segInv;

}

Segment::Segment()
{
    //ctor
}

Segment::~Segment()
{
    //dtor
}
