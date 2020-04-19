#include <iostream>
#include <algorithm>
#include "Pereche.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;


template <typename TipElem>
    void AfisatTablou(TipElem* tablou, unsigned int dim)
        {
            for (int i = 0; i < dim; i++)
            {
                cout << tablou[i] << endl;
            }
        }


int main()

{
    int tInt[10]{21, 22, 31, 1, 2, 332, 16, 5, 7, 4};
    double tDbl [10] {12.3, 22.1, 1.1, 76.43, 32.3, 21.01, 54.66, 77.77, 121.001, 21.07};
    sort<int*>(tInt, tInt+10); // functia sort lucreaza doar cu pointer // ultimul param indica la primul element din afara tabelului -> 1 + 10
    AfisatTablou<int>(tInt, 10);
    cout << endl;
    sort<double*>(tDbl, tDbl+10, greater<double>());
    AfisatTablou(tDbl, 10);
    cout << endl;

    vector <int> vInt;
    vector <char> vCh;
    vector <double> vDbl;
    srand(time(NULL));
    for (int i = 1; i <=5; i++)
    {
        int unu = rand() % 100 + 32;
        int doi = rand() % 100 + 32;


    Pereche<int> perInt{unu, doi};
    Pereche<char> perChar{unu, doi};
    Pereche<double> perDbl{sqrt(unu), sqrt(doi)};
    vInt.push_back(perInt.getMax());
    vCh.push_back(perChar.getMax());
    vDbl.push_back(perDbl.getMax());
    }
    for(const auto& elem : vInt) // & -> nu se creeaza copie la element
    {
        cout << elem << "\t";
    }
    cout << endl;
        for(const auto& elem : vCh) // & -> nu se creeaza copie la element
    {
        cout << elem << "\t";
    }
    cout << endl;
        for(const auto& elem : vDbl) // & -> nu se creeaza copie la element
    {
        cout << elem << "\t";
    }
    return 0;
}




