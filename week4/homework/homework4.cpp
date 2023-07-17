#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    // Problem 1)
    cout << "1)" << endl;
    string s;
    cout << s[0] << endl;
    // Problem 2)

    // Problem 2)
    cout << "2)" << endl;
    vector<vector<int>> ivec;
    vector<string> svec = ivec;
    vector<string> svec(10, "null");

    //Problm 3)
    cout << "3)" << endl;

    vector<int> v1; 
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    // Problem 4)
    int array_size = 10;
    int ia[array_size];
    for (int ix = 1; ix <= array_size; ++ix)
    ia[ix] = ix;

    return 0;
}