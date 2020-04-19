#include <iostream>
#include "Segment.h"
using namespace std;

int main()
{
    Segment unSegm;
    unSegm.x1 = unSegm.y1 = 0; // dam valoare membrilor
    unSegm.x2 = unSegm.y2 = 2;
    cout << unSegm.LungimeSegment() << endl;


    Segment invSegm = unSegm.InversulSegmentului();
    cout << invSegm.LungimeSegment() << endl;
    cout << invSegm.x2 << endl;
    cout << invSegm.y2 << endl;

    Segment segMare;
    segMare.x1 = unSegm.x2;
    segMare.y1 = unSegm.y2;
    segMare.x2 = invSegm.x2;
    segMare.y2 = invSegm.y2;
    cout << segMare.LungimeSegment() << endl;

    return 0;
}
