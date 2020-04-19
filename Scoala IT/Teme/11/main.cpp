#include <iostream>

using namespace std;

int main()
{
     int a = 0, b = 1, c = 2, d = 3, e = 1;
a = (b++, c++, d++, e++);
e = (c*=10 , e*=10);
cout << e << endl;



}
