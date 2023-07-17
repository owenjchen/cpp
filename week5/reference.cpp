#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int &r = n;
    cout << "n = " << n << endl;

    r = 10;
    cout << "n = " << n << endl;

    int i = 42;
    r = i;
    cout << "i = " << i << endl;
    cout << "n = " << n << endl;
    return 0;
}
