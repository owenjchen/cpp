#include "factor.h"
using namespace std;

void Factor::readN() {
    cout << "Please enter a positive integer: ";
    cin >> n;
    while (n <= 0) {
        cout << "Please enter a positive intger:";
        cin >> n;
    }
}

void Factor::getFactors() {
    factors.clear();
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
}

void Factor::printFactors() {
    if (factors.empty()) {
        getFactors();
    }
    cout << "Factors of " << n << ": ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}
