#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <vector>



class Instructor
{
    public:
        Instructor();
        Instructor(std::string, short, short);
        virtual ~Instructor();


        std::string getNumeInstructor(){return numeInstructor;}
        short getOre(){return ore;}
        short getCodUnic(){return codUnic;}
        void setOre(short _ore) {ore = _ore;}






    protected:

    private:
        std::string numeInstructor;
        short ore = 0;
        short codUnic;


};

#endif // INSTRUCTOR_H
