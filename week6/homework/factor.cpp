#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Factor {
private:
    int n;
    vector<int> factors;

public:
    Factor() : n(0) {};
    Factor(int n) : n(n) {};
    void read() {
        cout << "Enter a number: ";
        cin >> n;
    }
    void getFactors() ;
    void printFactors();
};

void Factor::getFactors() {
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

void Factor::printFactors() {
    if (factors.empty()) {
        getFactors();
    }
    cout << "Factors of " << n << ": ";
    for (int factor : factors) {
        cout << factor << ' ';
    }
    cout << '\n';
}

int main() {
    Factor f1;

    f1.read();
    f1.printFactors();

    Factor f2(24);
    f2.printFactors();

    return 0;
}
