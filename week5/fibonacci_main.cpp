#include <iostream>
#include <vector>
#include "fibonacci_func.h"
using namespace std;

int main() 
{
    vector<int> fib_seq;
    cout << "First 20 Fibonacci Numbers:" << endl;
    fibonacci_sequence(20, fib_seq);
    for (int fib: fib_seq) {
        cout << fib << " ";
    }
    cout << endl;
    return 0;
}