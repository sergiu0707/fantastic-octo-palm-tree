#ifndef X_H
#define X_H


class X
{
    public:
        X();
        virtual ~X();
        X(const X& source); // copy constructor
        static void print(char* text);

    protected:

    private:
        static int objCount;
};

#endif // X_H
