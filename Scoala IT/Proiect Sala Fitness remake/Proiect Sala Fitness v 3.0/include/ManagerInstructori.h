#ifndef MANAGERINSTRUCTORI_H
#define MANAGERINSTRUCTORI_H
#include "Instructor.h"
#include <vector>

class ManagerInstructori
{
    public:
        ManagerInstructori();
        virtual ~ManagerInstructori();
        void  addToVector(Instructor param1);


    protected:

    private:
        std::vector <Instructor> listaInstructori;

};

#endif // MANAGERINSTRUCTORI_H
