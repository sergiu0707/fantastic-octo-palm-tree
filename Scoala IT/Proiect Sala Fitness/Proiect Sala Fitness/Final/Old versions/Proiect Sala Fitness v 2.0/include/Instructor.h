#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <vector>


class Instructor
{
    public:
        Instructor();
        virtual ~Instructor();

        void addInstructor (Instructor x);



    protected:

    private:
        std::string numeInstructor;
        short ore;
        short codUnic;
        std::vector <Instructor> listaInstructori;

};

#endif // INSTRUCTOR_H
