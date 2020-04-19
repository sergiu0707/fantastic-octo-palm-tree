#include <iostream>

using namespace std;

int main()
{
   short nrSecret = 777;
   short nrPresupus = 0;

    cout << "Alege un numar de la 1 la 1000" << endl;

   while ( nrPresupus != nrSecret )
   {
        cin >> nrPresupus;
            if (nrPresupus > nrSecret)
        {
            cout << "Numarul secret este mai mic decat " << nrPresupus << endl;
        }
            else if (nrPresupus < nrSecret)
        {
            cout << "Numarul secret este mai mare decat " << nrPresupus << endl;
        }
   }
    cout << "Numarul secret este " << nrSecret << endl;

    return 0;
}
