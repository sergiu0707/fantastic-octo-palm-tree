#include "Factorial.h"

unsigned int Combinari (unsigned int n, unsigned int k)

{
    int comb = Factorial(n)/(Factorial(k) * Factorial(n-k));

}
