#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) 
{
    if (n < 3) {
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

void fibonacci_sequence(int n, vector<int> & fib_sequence)
{
    if (n == 1) {
        fib_sequence = {1};
    } else if (n == 2) {
        fib_sequence = {1, 1};
    } else {
        for(int i = 2; i <= n; i++){
            fib_sequence.push_back(fibonacci(i));
        }
    } 
}   

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