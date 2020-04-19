#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <vector>
#include "ManagerInstructori.h"


class Instructor : public ManagerInstructori
{
    public:
        Instructor();
        virtual ~Instructor();





    protected:

    private:
        std::string numeInstructor;
        short ore;
        short codUnic;

};

#endif // INSTRUCTOR_H
