#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
//    istream noulInput(cin.rdbuf());
//    ostream consolaNoua(cout.rdbuf());
//    double var = 0;
//
//    noulInput >> var;
//    consolaNoua << var << endl;


ifstream fisIntr("fis.txt");
while (! fisIntr.eof())
{
    char bufT[20];
    int i, ii;
    double d, dd;
    fisIntr.getline(bufT, 20);
    stringstream ss;
    ss << bufT;
    ss >> i >> ii >> d >> dd;
    cout << i << " " << ii << " " << d << " " << dd << endl;
}

    return 0;
}
