/*
 6) Write a program to read a sequence of ints from cin and store those values in a vector.
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i;
    vector<int> iv;
    // Read a line from a user prompt;
    cout << "Please enter integers (Ctrl-D to end):" << endl;
    while(cin >> i) {
        iv.push_back(i);
    }
    cout << "Here are the elements of the integer vector stored:" << endl;
    for(auto i: iv) {
        cout << i << endl;
    }
    cout << endl;
    return 0;
}