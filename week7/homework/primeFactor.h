#ifndef PRIMEFACTOR_H
#define PRIMEFACTOR_H
#include <iostream>
#include <vector>
#include <cmath>
#include "factor.h"

class PrimeFactor : public Factor {
private:
    int n_prime_factors;
    std::vector<int> prime_factors;
    std::vector<int> exponents;
public:
    PrimeFactor() {}
    PrimeFactor(int n) : Factor(n) {}
    void getPrimeFactors();
    void printPrimeFactors();
};

#endif
