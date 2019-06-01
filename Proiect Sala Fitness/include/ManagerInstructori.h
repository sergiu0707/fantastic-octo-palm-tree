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
        void loadInstructor();

        void displayInstructor();
        void deleteInstructor();





    private:
        std::vector<Instructor>listaInstructori;

};

#endif // MANAGERINSTRUCTORI_H
