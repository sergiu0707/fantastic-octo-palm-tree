#include <iostream>

using namespace std;

//short arraySuma[41]{0};

int main()
{
//    short arrayStack[41]{0};
//    short* arrayHeap = new short[41]{0};
//
//    for (short index = 0; index < 41; index++)
//    {
//        arrayStack[index] = index * 7;
//        arrayHeap[index] = index * 8;
//        arraySuma[index] = arrayStack[index] + arrayHeap[index];
//        cout << arraySuma[index] << endl;
//    }
//
//
//    delete[] arrayHeap;

char sirStack[] = "Ma mut";
char* sirHeap = new char[7];
sirHeap = sirStack;
cout << sirHeap << endl;




    return 0;
}
