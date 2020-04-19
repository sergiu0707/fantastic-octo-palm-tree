#include <iostream>
#include "Operatii.h"
using namespace std;
int menu ();

int main()
{
    start:menu();
    int optiune, x, y;
    cin >> optiune;

    cout << "Introdu doua numere intregi " << endl;
    cout << "Primul nr: ";
    cin >> x;
    cout << "Al doilea nr: ";
    cin >> y;

    switch (optiune)
    {
        case 1: Adunare(x, y);
        cout << "Raspunsul la " << x << " + " << y << " este " << Adunare(x, y) << endl;
        break;

        case 2: Scadere(x, y);
        cout << "Raspunsul la " << x << " - " << y << " este " << Scadere(x, y) << endl;
        break;

        case 3: Inmultire(x, y);
        cout << "Raspunsul la " << x << " * " << y << " este " << Inmultire(x, y) << endl;
        break;

        case 4: Impartire(x, y);
        cout << "Raspunsul la " << x << " / " << y << " este " << Impartire(x, y) << endl;
        break;

        case 5: Modulo(x, y);
        cout << "Raspunsul la " << x << " % " << y << " este " << Modulo(x, y) << endl;
        break;

        default: cout << "Numarul " << optiune << " nu corespunde nici unei operatiuni" << endl;
        goto start;
    }


    return 0;
}

int menu ()
{
    cout << "Introdu operatia pe care vrei sa o aplici" << endl;
    cout << "1. Adunare" << endl;
    cout << "2. Scadere" << endl;
    cout << "3. Inmultire" << endl;
    cout << "4. Impartire" << endl;
    cout << "5. Modulo" << endl;

}
