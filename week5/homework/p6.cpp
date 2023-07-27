/*
6) Write a function that will calculate the GCD (greated common divisor) of two integers. Use factor() function defined in 5)

    function name: gcd()
    input: int a, int b
    output: gcd of (a, b)
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

vector<int> factor(int n) {
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    return factors;
}

int gcd(int a, int b) {
    vector<int> factors_a = factor(a);
    vector<int> factors_b = factor(b);
    //sort vecotr in a descending order
    sort(factors_a.begin(), factors_a.end(), greater<int>());
    sort(factors_b.begin(), factors_b.end(), greater<int>());
    auto factor_a=factors_a.begin();
    auto factor_b=factors_b.begin();
    while (*factor_a != *factor_b){
        if (*factor_a > *factor_b) {
            if (factor_a != factors_a.end()) {
                factor_a = std::next(factor_a);
            } else {
                break;
            } 
        } else {
            if (factor_b != factors_b.end()) {
                factor_b = std::next(factor_b);
            } else {
                break;
            }    
        }
    }
    if (*factor_a == *factor_b) {
        return *factor_a;
    } else {
        return 1;
    }
}

// return the greatest common divisor
int gcd_new(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter an integer:" << endl;
    cin >> a;
    cout << "Enter another integer:" << endl;
    cin >> b;    
    cout << "gcd(" << a << "," << b << ") = " << gcd(a,b) << endl;
    cout << "gcd_new(" << a << "," << b << ") = " << gcd_new(a,b) << endl;    
}
