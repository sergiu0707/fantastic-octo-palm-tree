#ifndef MANAGERINSTRUCTORI_H
#define MANAGERINSTRUCTORI_H
#include "Instructor.h"
#include <vector>

class ManagerInstructori
{
    public:
        ManagerInstructori();
        virtual ~ManagerInstructori();

        void setNumeInstructor ();
        void setOre();
        void setCodUnic();

        std::string getNumeInstructor(){return numeInstructor;}
        short getOre() {return ore;}
        short getCodUnic() {return codUnic;}

        void addInstructor();
        void writeInstructor();


        //friend std::ostream & operator << (std::ostream &out, const Instructor & John);




    private:
        std::string numeInstructor;
        short ore;
        short codUnic;

};

#endif // MANAGERINSTRUCTORI_H
