#include <iostream>

using namespace std;

int main()
{
/*double incr = 10.5;               Increment ++ & --
    cout << incr-- << endl;
    cout << --incr << endl;
    cout << incr << endl;

    Pentru verificarea egalitatii / inegalitatii - Operator rationali
    (a==x) //                       != (a diferit de x)
    >=, <=, <=> (mai mic mai mare sau egal)

    Operatori logici

    AND && - and
    OR || - or
    NOT ! - not

    bitwise
    AND bitwise : & (bitand)
    OR bitwise: |   (bitor)
    NOT bitwise: ~   (compl)
    XOR exclusive "OR": ^ (0+0; 1+1 = 0 // 0+1 = 1) (xor))*/
    unsigned short exp1 = 0x00AB;
    unsigned short exp2 = 0x00B1;
    cout << hex << "exp1 & exp2 " << (exp1 & exp2) << endl;
    /* cout << hex << "exp1 & exp2 " << exp1 & exp2 << endl; fara paranteze are alt sens */
    cout << hex << "exp1 | exp2 " << (exp1 | exp2) << endl;
    cout << hex << "~exp1 " << ~exp1 << endl;
    cout << hex << "exp1 ^ exp2 " << (exp1 ^ exp2) << endl;
    /* bit shift left or right - << or >> + nr de biti de mutat */
    char opBit = 0b00000111;
    cout << hex << "opBit << 1 " << (opBit << 1) << endl;
    cout << hex << "opBit << 4 " << (opBit << 4) << endl;
    cout << hex << "opBit << 6 " << (opBit << 6) << endl;

    cout << hex << "opBit >> 1 " << (opBit >> 1) << endl;
    cout << hex << "opBit >> 4 " << (opBit >> 4) << endl;
    cout << hex << "opBit >> 6 " << (opBit >> 6) << endl;
    /* a *= b+5 = a = a*(b+5)
    ex: += ; *=; -=; /=; %=

    pt tema
    int var1 = 5
    var1 += 10

    var1 <<= 3
    */
}
