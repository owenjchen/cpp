#include "fibonacci_func.h"

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
