#include <iostream>

using namespace std;

int main()
{
//    char text [4] = "BEB"; //3 charactere + cifra zero 0
//    char text [];= "BEB";
//    char* text = "BEB"; //SIR
//    char* text = {'B','E','B',0}; //Charactere
//
//    "a" = sir
//    'a' = character
//    Pe HEAP doar asa:
//        char* text = new char [4]{'a','b','c',0}; // se poate si fara 0 daca e initializat [4]

//char sirChar[] = "Invatam sirurile";
//cout << sirChar << endl;
//
//char* pointChar = sirChar;
//
//sirChar[8] = 'f';
//pointChar[10] = 'g';
//cout << pointChar << endl;

//char port[] = {'p','o','r','t', '\0'}; // sau char port[5] = {'p','o','r','t'} SAU char port[] = {'p','o','r','t',0};
//cout << port << endl;
//
//char ch = 'a';
//char* duce = "duce";
//cout << &ch << endl;

// pointer = adresa unui sir char
// << din cout afiseaza un sir daca e & - adresa
//
//char* pointChar = new char [7]{'A','B', 'C','D','E','F'};
//cout << pointChar << endl;
////cin >> pointChar;
//cout << pointChar << endl;
//
//for (int i = 0; i < 24; i++)
//    {
//        pointChar[i] = 65 + i;
//    }
//
//
//
//
//delete[] pointChar;
//cout << pointChar << endl;

//double* varDbl;
//double var = 11.2;
//varDbl = &var;
//cout << varDbl << endl;
//++varDbl;
//cout << varDbl << endl;

// incrementare pointer creste cu nr de biti de la pointer - char, double, int
// pointer + 5 - incrimentare de 5 ori , ++pointer de 5 ori - doar numere intregi, nu se poate pointer + pointer
// scadere la fel, dar se pot scadea 2 pointeri (def slider)

//arrayTablou - adresa
//arrayTablou[0] - primul element (indexarea incepe de la 0)


char* sirChar = new char[100]{'\0'};
cin >> sirChar;
int var1 = 0;
int var2 = 0;
int var3 = 0;
int var4 = 0;
int var5 = 0;
char* tempChar = sirChar;

while (*tempChar != '\0') // sau hile (sirChar[i] != '/0') -> i++, etc
    {
        switch (*tempChar)
        {
            case 'A':
            case 'a':var1++; break;
            case 'E':
            case 'e':var2++; break;
            case 'I':
            case 'i':var3++; break;
            case 'O':
            case 'o':var4++; break;
            case 'U':
            case 'u':var5++; break;
        }
        ++tempChar;
    }

cout << var1 + var2 + var3 + var4 + var5 << endl;
delete[] sirChar;

//Programul e gresit initial - incrementarea muta inceputul pointerului => memoria se corupe - modificat prin adaugarea pointerului tempChar



return 0;
}
