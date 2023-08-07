#include <iostream>
#include <string>
using namespace std;

int main() {
    int n[10];
    int* ptr = n;
    cout << "n = " << n << endl;
    for (int i = 0; i < 10; i++){
        n[i] = i;
        cout << "n+" << i << "= " << n+i << endl;
    }
    cout << "n = " << n << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    cout << "n[5] = " << n[5] << endl;
    cout << "&n[5] = " << &n[5] << endl;
    cout << "ptr+5 = " << ptr+5 << endl;
    cout << "*(ptr+5) = " << *(ptr+5) << endl;    
}