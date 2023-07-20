/*
 5) Write a program that reads a string of characters including punctuation and 
 writes what was read but with the punctuation removed.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    // Read a line from a user prompt;
    cout << "Please type something with punctuations and I will remove the punctuations for you:" << endl;
    getline(cin, s);
    for(auto c: s) {
        if (!ispunct(c))
            cout << c;
    }
    cout << endl;
    return 0;
}