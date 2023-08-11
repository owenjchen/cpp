#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 10;
    int* ptr = &n;
    double d = 3.1419;
    double* p2 = &d;
    cout << "n = " << n << endl;
    cout << "&n = " << &n << endl;    
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "&d = " << &d << endl;    
    cout << "p2 = " << p2 << endl;       
    cout << "d = " << d << endl;   
    cout << "*p2 = " << *p2 << endl; 
    void* p3 = &n;`
    cout << "p3 = " << p3 << endl;
    cout << "*p3= " << *(int*)p3 << endl;

    *ptr = 20;
    cout << "n = " << n << endl;    
}