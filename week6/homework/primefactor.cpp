#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Factor {
protected:
    int n;
    vector<int> factors;

public:
    Factor() : n(0) {}
    Factor(int n) : n(n) {}

    void read() {
        cout << "Enter a number: ";
        cin >> n;
    }

    void getFactors() {
        factors.clear();
        for (int i = 1; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                factors.push_back(i);
                if (i != n / i) {
                    factors.push_back(n / i);
                }
            }
        }
    }

    void printFactors() {
        if (factors.empty()) {
            getFactors();
        }
        cout << "Factors of " << n << ": ";
        for (int factor : factors) {
            cout << factor << ' ';
        }
        cout << '\n';
    }
};

class PrimeFactor : public Factor {
private:
    vector<int> primeFactors;
    vector<int> exponents;

public:
    PrimeFactor() : Factor() {}
    PrimeFactor(int n) : Factor(n) {}

    void getPrimeFactors() {
        primeFactors.clear();
        exponents.clear();
        int temp = n;
        for (int i = 2; i <= sqrt(temp); ++i) {
            int exponent = 0;
            while (temp % i == 0) {
                ++exponent;
                temp /= i;
            }
            if (exponent > 0) {
                primeFactors.push_back(i);
                exponents.push_back(exponent);
            }
        }
        if (temp > 1) {
            primeFactors.push_back(temp);
            exponents.push_back(1);
        }
    }

    void printPrimeFactors() {
        if (primeFactors.empty()) {
            getPrimeFactors();
        }
        cout << "Prime factors of " << n << ": ";
        int cnt = primeFactors.size();
        if (cnt > 1) {
            for (size_t i = 0; i < cnt-1; ++i) {
                cout << primeFactors[i] << '^' << exponents[i] << '*';
            }
            cout << primeFactors[cnt-1] << '^' << exponents[cnt-1]  << endl;
        } else {
            cout << primeFactors[0] << '^' << exponents[0]  << endl;
        }

        cout << '\n';
    }
};

int main() {
    PrimeFactor pf1;
    pf1.read();
    pf1.printFactors();
    pf1.printPrimeFactors();

    PrimeFactor pf2(24);
    pf2.printFactors();    
    pf2.printPrimeFactors();

    return 0;
}
