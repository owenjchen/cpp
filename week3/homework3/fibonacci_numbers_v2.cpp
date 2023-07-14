/*
Fibonacci numbers without a temp variable
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    cout << "First 20 Fibonacci Numbers:" << endl;
    for(int i = 0; i < 20; i++){
        // this does not work:  a, b = b, a+b;
        b = a + b;
        a = b - a;
        cout << a << " ";
    }
    cout << endl;
    return 0;
}