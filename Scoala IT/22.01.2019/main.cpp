#include <iostream>

using namespace std;

namespace Sergiu
{
    namespace Sergiu3
    {
        float var1 = 12.12;
    }
    int var1 = 22;
    bool var2 = true;
}
namespace Sergiu2
{
    float var1 = 2.18;
    short var2 = 2;

}

//extern int var2;
// int var3 = 17;
int main()
{


cout << Sergiu::var1 << endl;

using namespace Sergiu2;
cout << var2 << endl;
    int var2 = 20;
cout << var2 << endl;

using Sergiu::var2;
cout << var2 << endl;

using Sergiu::Sergiu3::var1;
cout << var1 << endl;

PT tema
cout << &numeVar << endl;










double var3  = 12.44;
cout << ::var3 << endl;
cout << var3 << endl;


 cout << var2 << endl;

  var2 = 999;
 cout << var2 << endl;

 cin >> var2;
 cout << var2 << endl;

 for (int i = 1; i<=10; ++i)
 {
     static int locVar = 10;
     cout << locVar * i << endl;
     ++locVar;
    // STATIC se aloca in memorie de la inceputul rularii -> aceeasi meorie -> valoarea nu se pierde
 }

auto oVariabila = 2.3;
cout << oVariabila << endl;    //se deduce tipul implicit de variabila

const - blocheaza valoarea
volatile - compilatorul nu face optimizari
register - pastreaza memorie in cache la procesor
namespace - protejeaza identificatorii (variabile / functii) - mai multe proiecte - se repeta variabile - protejeaza
            - se creeaza doar global sa in interiorul altui namespace



    return 0;
}
