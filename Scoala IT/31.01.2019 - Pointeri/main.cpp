#include <iostream>

using namespace std;

int main()
{

//   * - arata valoare (variabila) pointer-ului nu adresa

float varFlt = 10.10;
short varSrt = 20;
int varInt = 30;

float *pointFlt = &varFlt;
short *pointSrt = &varSrt;
int *pointInt = &varInt;

cout << pointFlt << endl;
cout << pointSrt << endl;
cout << pointInt << endl;
cout << *pointFlt << endl;
cout << *pointSrt << endl;
cout << *pointInt << endl;
cout<<endl;

//*pointFlt = 10.9;
//*pointSrt = 123;
//*pointInt = 456;
//cout << pointFlt << endl;
//cout << pointSrt << endl;
//cout << pointInt << endl;
//cout << *pointFlt << endl;
//cout << *pointSrt << endl;
//cout << *pointInt << endl;
//cout<<endl;


//float varFloat = 99.99;
//pointFlt = &varFloat;
//cout << pointFlt << endl;
//cout << *pointFlt << endl;
//
//
//float varFloat;
//void* pntVoid = &varFloat;
//
//float* pntFloat = static_cast<float*>(pntVoid); // conversie to float
//*pntFloat = 3.1416;
//cout << varFloat << endl;
//*static_cast<int*>(pntVoid) = 15;
//cout << varFloat << endl;
//
//int varInt = 100;
//void *pointVoid = &varInt;
//*static_cast<int*>(pointVoid) = 200;
//cout << varInt << endl;
//cout << *static_cast<int*>(pointVoid) << endl;
//
//short varUnu = 1;
//short varDoi = 1;
//cout << &varUnu << endl;
//cout << &varDoi << endl;
//
//void *voidDoi = &varDoi;
//cout << *static_cast<short*>(voidDoi) << endl;
//cout << *static_cast<int*>(voidDoi) << endl;
//cout << hex << *static_cast<int*>(voidDoi) << endl;
//cout << *static_cast<float*>(voidDoi) << endl;

    return 0;
}
