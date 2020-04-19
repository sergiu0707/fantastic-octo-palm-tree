#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string a = "1 + 2i";
    string b = "1 + 3i";
    istringstream sa(a), sb(b);
    int ra, ia, rb, ib;
    ostringstream out;
    char buff;
    sa >> ra >> buff >> ia >> buff;
    sb >> rb >> buff >> ib >> buff;
    out << ra * rb - ia * ib <<  '+' << ra * ib + ia * rb << 'i';
    string result = out.str();
    cout << result;
    return 0;
}
