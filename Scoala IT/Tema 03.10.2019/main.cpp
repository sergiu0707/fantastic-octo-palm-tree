#include <iostream>

using namespace std;

enum TipTeren {agricol, pasune, livada, viran};

struct Suprafata
{
    float _lungime;
    float _latime;
};
struct Teren
{
    long long _cnpProprietar;
    TipTeren _tipTeren;
    Suprafata _suprafata;
    float _arie;
    double _long, _lat;

};




int main()
{

    Teren unTeren;
unTeren._cnpProprietar = 1880809929312;
unTeren._tipTeren = pasune;
unTeren._suprafata._latime = 87;
unTeren._suprafata._lungime = 122;
unTeren._long = 45.788537;
unTeren._lat = 21.201040;
unTeren._arie = unTeren._suprafata._latime * unTeren._suprafata._lungime;

Teren* oMovila = new Teren;
oMovila->_cnpProprietar = 1772309998;
oMovila->_tipTeren = agricol;
oMovila->_suprafata._latime = 25;
oMovila->_suprafata._lungime = 45;
oMovila->_long = 48.788537;
oMovila->_lat = 19.201040;
oMovila->_arie = oMovila->_suprafata._latime * oMovila->_suprafata._lungime;

cout << "CNP Proprietar: " << oMovila->_cnpProprietar << endl;
cout << "Tip Teren: " << oMovila->_tipTeren << endl;
cout << "Latime Suprafata: " << oMovila->_suprafata._latime << endl;
cout << "Lungime Suprafata: " << oMovila->_suprafata._lungime << endl;
cout << "Arie: " << oMovila->_arie << endl;
cout << "Longitutine: " << oMovila->_long << endl;
cout << "Latitudine: " << oMovila->_lat << endl;

delete oMovila;
    return 0;
}
