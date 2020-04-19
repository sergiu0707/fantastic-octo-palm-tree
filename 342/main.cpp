#include <iostream>

using namespace std;

class ForStaticEx

{

    public:

        ForStaticEx(){cnt*=2;}

        static int GetCnt() { return cnt; }

    private:

        static int cnt;

};

int ForStaticEx::cnt = 5;

int main()

{

    ForStaticEx ob1, ob2, ob3;

    cout << ForStaticEx::GetCnt() << endl;

}
