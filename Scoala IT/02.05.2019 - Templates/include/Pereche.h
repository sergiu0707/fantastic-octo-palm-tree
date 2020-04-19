#ifndef PERECHE_H
#define PERECHE_H

template <class T>
class Pereche
{
    public:
        Pereche();
        Pereche(T param1, T param2)
        {
            a = param1;
            b = param2;
        }

        T getMax();

        virtual ~Pereche(){}

    protected:

    private:
        T a;
        T b;
};

template <class T>
T Pereche<T>::getMax()
{
    T retval;
    retval = a > b? a : b;
    return retval;
}

#endif // PERECHE_H
