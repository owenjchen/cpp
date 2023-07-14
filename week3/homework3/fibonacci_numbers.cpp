#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1;
    int temp = 0;
    cout << "First 20 Fibonacci Numbers:" << endl;
    for(int i = 0; i < 20; i++){
        temp = b;
        b = a + b;
        a = temp;
        cout << a << " ";
    }
    cout << endl;

    return 0;
}