#ifndef DECONSTRUIT_H
#define DECONSTRUIT_H


class DeConstruit
{
    public:
        DeConstruit();
        DeConstruit(char);
        DeConstruit(double);
        DeConstruit(char, bool);
        DeConstruit(char, double, bool);
        virtual ~DeConstruit();

        void TipMembri(); // metoda

    protected:

    private:
         char membruChar;
         double membruDouble;
         bool membruBool;

};

#endif // DECONSTRUIT_H
