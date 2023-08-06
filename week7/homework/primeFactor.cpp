#include "primeFactor.h"
using namespace std;

void PrimeFactor::getPrimeFactors() {
    prime_factors.clear();
    exponents.clear();
    int temp = this->n;  // if n is private, then replace it with:  temp = getN();

    // prime factor of 2;
    int exponent = 0;
    int i = 2;
    int count = 0;
    while (temp % i == 0) {
        ++exponent;
        temp /= i;
    }
    if (exponent > 0) {
        prime_factors.push_back(i);
        exponents.push_back(exponent);
        count++;
    }
    // prime factors 3 and above are odd numbers
    for (i = 3; i <= sqrt(temp); i += 2) {
        exponent = 0;
        while (temp % i == 0) {
            ++exponent;
            temp /= i;
        }
        if (exponent > 0) {
            prime_factors.push_back(i);
            exponents.push_back(exponent);
            count++;
        }
    }
    if (temp > 1) {
        prime_factors.push_back(temp);
        exponents.push_back(1);
        count++;
    }
    //set number of prime factors
    n_prime_factors = count;
}

void PrimeFactor::printPrimeFactors() {
    if (prime_factors.empty()) {
        if (getN() <= 0) {
            readN();
        }
        getPrimeFactors();
    }

    cout << "Prime factorization of " << this->n << ": ";
    if (n_prime_factors > 1) {
        for (int i = 0; i < n_prime_factors-1; i++) {
            if (exponents[i] > 1)
                cout << prime_factors[i] << "^" << exponents[i];
            else
                cout << prime_factors[i];
            cout << "*";
        }
        //last one
        int i = n_prime_factors-1;
        if (exponents[i] > 1)
            cout << prime_factors[i] << "^" << exponents[i];
        else
            cout << prime_factors[i];         
    } else {
        if (exponents[0] > 1)
            cout << prime_factors[0] << "^" << exponents[0];
        else
            cout << prime_factors[0];              
    }    
    cout << endl;
}
