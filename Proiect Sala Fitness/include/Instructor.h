#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <vector>
#include "ManagerInstructori.h"


class Instructor
{
    public:
        Instructor();
        virtual ~Instructor();

        void setNumeInstructor ();
        void setOre(short paramOre) {ore = paramOre;}
        void setCodUnic ();
        std::string getNumeInstructor(){return numeInstructor;}
        short getOre(){return ore;}
        short getCodUnic(){return codUnic;}






    protected:

    private:
        std::string numeInstructor;
        short ore;
        short codUnic;

};

#endif // INSTRUCTOR_H
