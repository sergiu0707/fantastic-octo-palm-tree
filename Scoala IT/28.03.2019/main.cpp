#include <iostream>
#include "x.h"

using namespace std;

void DeApelat(X par)
{
    par.Print();
}

int main()
{
X x1{}; // - constructor default -> se pun acolade -> ori {}, ori nimic
x1.Print();

X x2(x1); // - constructor de copiere
x2.Print();

DeApelat(x2);


X x3;           // - constructor default -> se creaza obiectul x3 ___ assigment operator
x3 = x1;        // i se atribuie lui x3 valoarea lui x1
x3.Print();

X x4 = x1;      // constructor de copiere - daca e pe aceeasi linie
x4.Print();

    return 0;
}
