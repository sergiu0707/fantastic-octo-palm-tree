#include <iostream>

using namespace std;


enum MatConstr {caramida, beton, vaiuga, bca};
enum Confort {conf1, conf2, conf3};
enum Tip {baie, hol, bucatarie, living};
enum Zugraveala {lavabila, var, vopsea};

struct Casa
{
    int anConstr;
    int confort;
    bool decomandat;
    int etaj = 5;
    MatConstr matConstr; // lit mica = variabila -> enum MatConstr
        struct Incapere
        {
            Tip tip;
            Zugraveala zugraveala;
            short nrPrize;

        } incapere[8]; // Array de 8 elemente, indexarea incepe de la 0


} casa;




int main()
{
// sau Casa casa daca nu era sus dupa acolade
   casa.anConstr = 2000;
   casa.confort = 2;
   casa.decomandat = 1;
   casa.matConstr = caramida;
   casa.incapere[0].tip = living;
   casa.incapere[0].zugraveala = vopsea;
   casa.incapere[0].nrPrize = 4;

   Casa* hasa = new Casa;
   hasa->incapere[0].zugraveala = vopsea; // SAU ASA ----> (*hasa).incapere[0].zugraveala = vopsea;
    hasa->incapere[0].nrPrize = 8;
    cout << casa.etaj << endl;

    cout << casa.incapere[0].nrPrize << endl;
    cout << hasa -> incapere[0].nrPrize << endl; // Pe heap e diferit de stiva
    cout << (*hasa).incapere[0].nrPrize << endl;
    cout << &casa.anConstr << endl;
    cout << &hasa -> anConstr << endl;
    cout << sizeof casa << endl;

 ///////////////////////////////////////////////////////////////////////

 // TIPURI DE DATE UTILIZATOR

 //Enumerari

//enum <oriceNume> {id1 <= val1, id2 <= val2}; // val1 si val2 = numere intregi // valoarea nu e obligatorie, daca val1 = 7 atunci val2 = 8 (+1) // primul element e 0 daca nu e definit

//enum masini {audi = 23, bmw, renault = 8, bentley = 10, vw, porsche = 15};
//
//int nrTast;
//cin >> nrTast;
//
//switch (nrTast)
//    {
//        case audi: cout << "Ai castigat Audi" << endl; break;
//        case bmw: cout << "Ai castigat BMW" << endl; break;
//        case renault: cout << "Ai castigat Renault" << endl; break;
//        case bentley: cout << "Ai castigat Bentley" << endl; break;
//        case vw: cout << "Ai castigat VW" << endl; break;
//        case porsche: cout << "Ai castigat Porsche" << endl; break;
//        default: cout << "Ghinion" << endl; break;

//    }
  // Class enum C++11
//        enum class Luna {ian = 1, feb, mar};
//        luna varLuna =
//        cout << static_cast<short>(luna::feb) << " " << static_cast<short>()
        // Incomplete

    // STRUCTURI

//struct NumeStruct
//    {
//        tip1 camp1;
//        tip2 camp2;
//        tip3 camp3;
//    }; // <- obligatoriu ;
//
//    NumeStruct numeVariabilaStruct;
//        // accesarea elementelor din structur
//        numeVariabilaStruct.numeCamp // poate fi initializata: = 20
//
//        //Structuri pe heap
//(*NumePntVarStruc).numeCamp;
////SAU
//Nume PntVarStruct -> numeCamp;

///////////////////////////////////////////////////////////////////////////////

//    // !!!!! //
//struct BateCamp
//{
//    int camp1;
//    float camp2;
//    short camp3;
//    struct Mic
//        {
//            char camp;
//        } campStruct; // sinonim cu Mic campStruct
//};
//BateCamp batuta;
//batuta.camp1 = 25;
//batuta.campStruct.camp = 'A';
//
// //HEAP
//
//BateCamp* b = new BateCamp;
////(*b).camp1 = 25;
////SAU
//b->camp1 = 25;
//b->campStruct.camp = 'A';

// !!!!!! //
//////////////////////////////////////////////////////////////////////////






    return 0;
}
