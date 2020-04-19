#include <iostream>
#include <Copac.h>
using namespace std;

int main()
{
   Copac dud(1);
   cout << "Inainte de bloc" << endl;
   {
       cout << "La intrare in bloc" << endl;
       Copac nuc(10);
       dud.Creste(2);
       nuc.Creste(5);
       cout << "La iesire din bloc" << endl;
   }
    cout << "Dupa bloc" << endl;


    return 0;
}
