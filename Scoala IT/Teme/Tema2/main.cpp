#include <iostream>

using namespace std;

int main()
{
   unsigned short trim ;
cin >> trim;

    if (trim > 4)
    cout << "Exista 4 trimestre; Alege 1, 2, 3 sau 4!" << endl;
        else
            if (trim == 1)
            {
            cout << "Bilant pe trimestrul 1 - 3000 " << endl;
            cout << "Bilantul pe anul anterior - 8375" << endl;
            }

        else
            if (trim == 2)
            {
            cout << "Bilant pe trimestrul 2 - 5000 " << endl;
            }

        else
            if (trim == 3)
            {
            cout << "Bilant pe trimestrul 3 - 4000 " << endl;
            }

        else
            if (trim == 4)
            {
            cout << "Bilant pe trimestrul 4 - 2500 " << endl;
            }




return 0;

}

