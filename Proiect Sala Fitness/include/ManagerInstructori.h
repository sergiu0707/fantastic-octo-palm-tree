#ifndef MANAGERINSTRUCTORI_H
#define MANAGERINSTRUCTORI_H
#include "Instructor.h"
#include <vector>

class ManagerInstructori
{
    public:
        ManagerInstructori();
        virtual ~ManagerInstructori();

        void addInstructor();
        //friend std::ostream & operator << (std::ostream &out, const Instructor & John);




    private:

};

#endif // MANAGERINSTRUCTORI_H
