#include <iostream>

using namespace std;

int main()
{

  short a = 3;

    a += 4;
        cout << a << " a += 4;" << endl;
    a -= 6;
        cout << a << "  a -= 6;" << endl;
    a *= 2;
        cout << a << " a *= 2;" << endl;

  short b = 8;

    b >>= 3;
        cout << b << " b >>= 3" << endl;
    b |= 6;
        cout << b << " b |= 6" << endl;
    b &= 3;
        cout << b << " b &= 3" << endl;

    return 0;
}
