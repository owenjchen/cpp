/*
5) Write a function that will calculate all factors of an integer
    function name: factor()
    input: int n
    output: a vector of integers with each element being a unique factor of n
*/
#include <iostream>
#include <vector>
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

int main() {
    int n = 0;
    cout << "Enter any integer:" << endl;
    cin >> n;
    vector factors = factor(n);
    sort(factors.begin(), factors.end());
    cout << "Factors of " << n << " are:" << endl;
    for (int f:factors)
        cout << f << " ";
    cout << endl;
}
