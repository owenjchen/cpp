/*
7) Write a function that determines whether an input integer is a prime or not.

    function name: isPrime()
    input: int 
    output: bool
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    cout << "Enter an integer:" << endl;
    cin >> a;
    cout << a << " is " << (isPrime(a)? "a prime." : "not a prime.") << endl;
}
