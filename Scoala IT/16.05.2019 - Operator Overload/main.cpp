#include <iostream>
#include "Fractie.h"
using namespace std;

int main()
{
    Fractie f1(1, 2);
    Fractie f2(3, 4);
    f1 += f2;
    Fractie f3;
    cout << "Introduceti Fractia" << endl;
    cin >> f3;
    Fractie f4 = f3 + f2;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f3 = " << f3 << endl;
    cout << "f4 = " << f4 << endl;
    if (f1 > f4)
    {
        cout << f1 << " > " << f4 << endl;
    }
    else
    {
        cout << f1 << " <= " << f4 << endl;
    }





            return 0;
}
