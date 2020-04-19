#include <iostream>
#include "Segment.h"
#include "Triunghi.h"
using namespace std;

int main()
{
//    Segment unSegm;
//    unSegm.x1 = unSegm.y1 = 0; // dam valoare membrilor
//    unSegm.x2 = unSegm.y2 = 2;
//    cout << unSegm.LungimeSegment() << endl;
//
//
//    Segment invSegm = unSegm.InversulSegmentului();
//    cout << invSegm.LungimeSegment() << endl;
//    cout << invSegm.x2 << endl;
//    cout << invSegm.y2 << endl;
//
//    Segment segMare;
//    segMare.x1 = unSegm.x2;
//    segMare.y1 = unSegm.y2;
//    segMare.x2 = invSegm.x2;
//    segMare.y2 = invSegm.y2;
//    cout << segMare.LungimeSegment() << endl;

    Triunghi ObTriunghi;
    ObTriunghi.laturi[0].x1 = 0;
    ObTriunghi.laturi[0].y1 = 0;
    ObTriunghi.laturi[0].x2 = 0;
    ObTriunghi.laturi[0].y2 = 1;

    ObTriunghi.laturi[1].x1 = 0;
    ObTriunghi.laturi[1].y1 = 0;
    ObTriunghi.laturi[1].x2 = 1;
    ObTriunghi.laturi[1].y2 = 0;

    ObTriunghi.laturi[2].x1 = 0;
    ObTriunghi.laturi[2].y1 = 1;
    ObTriunghi.laturi[2].x2 = 1;
    ObTriunghi.laturi[2].y2 = 0;

    cout << "Perimetrul este " << ObTriunghi.CalcPerimetru() << endl;

    if (ObTriunghi.Isoscel() == 1)
    {
       cout << "Triunghiul este isoscel" << endl;
    }

        else
        {
            cout << "Triunghiul nu este isoscel" << endl;

        }

        //SAU cout << cout << (ObTriunghi.Isoscel()?"" : "Nu ") << "este isoscel" << endl; // oarecum?


    return 0;
}
