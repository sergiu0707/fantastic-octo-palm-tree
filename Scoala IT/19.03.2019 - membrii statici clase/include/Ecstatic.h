#ifndef ECSTATIC_H
#define ECSTATIC_H


class Ecstatic
{
    public:
        Ecstatic();
        virtual ~Ecstatic();

        static void AfiseazaStatic();
        void AfiseazaNeStatic();

        void AtribuieMembri(int val);


    protected:

    private:
        int mNorm;
        static int mStatic;



};

#endif // ECSTATIC_H
