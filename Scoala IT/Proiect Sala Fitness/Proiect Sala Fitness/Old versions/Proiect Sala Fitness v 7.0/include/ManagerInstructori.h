#ifndef MANAGERINSTRUCTORI_H
#define MANAGERINSTRUCTORI_H
#include "ManagerInstructori.h"
#include "Instructor.h"
#include <vector>

class ManagerInstructori

{
    public:
        ManagerInstructori();
        virtual ~ManagerInstructori();

        void setNumeInstructor ();
        void setOre(short paramOre) {ore = paramOre;}
        void setCodUnic ();

        void addInstructor();
        void loadInstructor();

        void displayInstructor();
        void deleteInstructor();



    protected:
        static std::vector<Instructor>listaInstructori;
        friend class ManagerClienti;


    private:

        std::string numeInstructor;
        short ore = 0;
        short codUnic;

};

#endif // MANAGERINSTRUCTORI_H
