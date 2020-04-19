#include <iostream>

using namespace std;

int main()
{
//    cout << "Introdu un nr" << endl;
//    int unsigned nrIntreg;
//    cin >> nrIntreg;
//    bool ePrim = true;
//
//        for (int numar2 = 2; numar2 <= nrIntreg/2; numar2++)
//            {
//
//                if (nrIntreg%numar2 == 0)
//                {
//                    ePrim = false;
//                    break;
//                }
//
//             }
//    cout << nrIntreg;
//    if ( !ePrim) cout << " nu";
//    cout << " e prim";

//    do
//    {
//        char opresc;
//        cout << "Introduceti un nr intreg pozitiv";
//        int nr = 0;
//        cin >> nr;
//        if (nr <=0) continue;
//        cout << "\nCubul lui este " << nr*nr*nr << endl;
//        cout << "Doriti sa continuati? d/n";
//        cin >> opresc;
//        if (opresc == 'n') break;
//    }
//    while (1);

//        SWITCH

int numar = 3;
cout << "Alege un nr" << endl;
cin >> numar;
switch (numar)
    {

    case 1: cout << "Stanga Jos"; break;
    case 2: cout << "Jos"; break;
    case 3: cout << "Dreapta Jos"; break;
    case 4: cout << "Stanga"; break;
    case 5: cout << "Mijloc"; break;
    case 6: cout << "Dreapta"; break;
    case 7: cout << "Stanga sus"; break;
    case 8: cout << "Sus"; break;
    case 9: cout << "Dreapta sus"; break;
    default:cout << "Incorect"; break;
    }
    return 0;

    eticheta:
    goto eticheta


}

