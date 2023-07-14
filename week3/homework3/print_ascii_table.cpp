#include <iostream>
using namespace std;
int main(){
    cout << "Symbol: ASCII Code" << endl;
    for(char c = 33; c < 127; c++){
        cout << c << ": " << (int) c << endl;
    }
}