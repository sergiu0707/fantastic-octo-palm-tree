#include <iostream>

using namespace std;

//void functie1(int m, int l)
//{
//    cout << "lalalalal" << endl;
//    cout << m << endl;
//    cout << l << endl;
//}

//void functie2(int m)
//{
//
// for(int f = 1; f <= 5; f++)
// {
//     cout << m * f << " ";
//
// }
//    cout << endl;
//}

void functie3(int a, int& b, int* c)
{

a = 777;
b = 888;
*c = 999;

cout << "functie3 " << a << endl;
cout << "functie3 " << b << endl;
cout << "functie3 " << *c << endl;
cout << "functie3 " << c << endl;
cout << endl;
}






int main()
{
//int m = 200;
//int l = 100;
//    functie(m, l);


//int m = 3;
//functie2(m);
//functie2(7);
//functie2(13);

int a = 10;
int b = 20;
int c = 30;

cout << "Main " << a << endl;
cout << "Main " << b << endl;
cout << "Main " << c << endl;
cout << "Main " << &c << endl;
cout << endl;

functie3(a, b, &c);


cout << "Main " << a << endl;
cout << "Main " << b << endl;
cout << "Main " << c << endl;
cout << "Main " << &c << endl;
cout << endl;

    return 0;
}
