#ifndef FACTOR_H
#define FACTOR_H
#include <iostream>
#include <vector>
#include <cmath>
#include "factor.h"

class Factor {
protected:
    int n;
    std::vector<int> factors;
public:
    Factor() : n(0) {}
    Factor(int n) : n(n) {}
    void readN();
    void inline setN(int num) {n = num;};
    int inline getN() { return n; };
    void getFactors();
    void printFactors();
};

#endif
