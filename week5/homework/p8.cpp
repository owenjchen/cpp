/*
8) Write a program that will produce a list of prime numbers that are less than a given input integer. Use isPrime() function in 7) if needed.  


    function name: prime_list()
    input: int n
    output: a list of prime numbers

Main program: prompt user to enter a number and store it as integer n.  
Call prime_list() and print the list of primes on screen.

*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n);
int prime_list(int n, vector<int> &primes);

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

int prime_list(int n, vector<int> &primes) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
            count++;
        }
    }
    return count;
}

int main() {
    int n, cnt;
    vector<int> primes;
    cout << "Enter an integer:" << endl;
    cin >> n;
    if (n > 1) {
        cnt = prime_list(n, primes);
        cout << "There are " << cnt 
            << " primes that are less than " 
            << n << ":" << endl;
        for(int i: primes){
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Please enter an integer equal or greater than 2." << endl;
    }
}
