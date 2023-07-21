/*
 7) Modify your program in 6) above to read strings this time.
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    vector<string> sv;
    // Read a line from a user prompt;
    cout << "Please enter strings (Ctrl-D to end):" << endl;
    while(cin >> s) {
        sv.push_back(s);
    }
    cout << "Here are the elements of the string vector stored:" << endl;
    for(auto i: sv) {
        cout << i << endl;
    }
    return 0;
}