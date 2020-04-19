#include <iostream>

using namespace std;
int varGlob = 200;
static int globStatic = 300;

namespace Group
{
    int varGroup = 400;
}

int main()
{

  int varLoc1 = 500;
  int varLoc2 = 600;
  static int varStat = 700;
using Group::varGroup;
  cout << &varGlob << endl;
  cout << &globStatic << endl;
  cout << &varGroup << endl;
  cout << &varLoc1 << endl;
  cout << &varLoc2 << endl;
  cout << &varStat << endl;


//    for (short i = 1; i <= 25; i++)
//    {
//
//
//        if ( i % 3 == 0 && i % 2 == 0)
//        {
//            cout << "Par ";
//        }
//        else if ( i % 3 == 0 && i % 2 != 0)
//        {
//
//            continue;
//        }
//
//    cout << i << endl;
//    }

//unsigned short trim ;
//cout << "Alegeti un trimestru (1 - 4)" << endl;
//cin >> trim;
//switch (trim)
//{
//    case 1: cout << "Bilant pe trimestrul 1 - 3000 " << endl << "Bilantul pe anul anterior - 8375"; break;
//    case 2: cout << "Bilant pe trimestrul 2 - 5000 "; break;
//    case 3: cout << "Bilant pe trimestrul 3 - 4000 "; break;
//    case 4: cout << "Bilant pe trimestrul 4 - 2500 "; break;
//    default: cout << "Exista 4 trimestre; Alege 1, 2, 3 sau 4!"; break;
//}




    return 0;
}
