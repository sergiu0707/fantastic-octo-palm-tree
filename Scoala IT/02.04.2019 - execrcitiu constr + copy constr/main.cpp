#include <iostream>
#include <X.h>
using namespace std;

X Fct(X parametru)
{
    X::print("In interiorul functiei ");
    return parametru;
}

int main()
{

   X primX;
   X::print("Dupa creearea primului obiec"); // se poate apela si asa pt ca e statica metoda
   //primX.print("Dupa creearea primului obiec"); metode normale
   X secondX;
   X::print("Dupa creearea obiectului doi");


   X thirdX = Fct(primX); // se atribuie lui thirdX valoarea functiei - return paramatru;
    X::print ("Dupa apelul functiei ");


    return 0;
}


