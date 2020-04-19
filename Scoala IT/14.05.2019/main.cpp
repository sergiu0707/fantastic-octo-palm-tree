#include <iostream>
#include <cmath>

using namespace std;

bool Validare()
{
    bool valid = false;
    int pp = 0;
    cin >> pp;
    if(cin.fail())
        {
            throw "Nu ati introdus un numar! Introduceti un numar";
        }

    if(sqrt(pp) == floor(sqrt(pp)))
        {
            valid = true;
        }


    return valid;
}

int main()
{
    bool retFct = false;
    cout << "Introduceti un patrat perfect" << endl;

    while( !retFct)
        {
          try{
            retFct = Validare();
            if (!retFct)
                {
                    cout << "Nu e patrat perfect!" << endl;
                }
            }
            catch(const char* ex)
            {
                cout << ex << endl;
                cin.clear();
                cin.ignore(10, '\n');
            }

        }

    return 0;
}
