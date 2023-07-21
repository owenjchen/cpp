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
    cout << "2)" << endl;
    vector<vector<int>> ivec;
    //vector<string> svec = ivec;
    vector<string> svec2(10, "null");

    //Problm 3)
    cout << "3)" << endl;
    vector<int> v1; 
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    vector<string> v8{"10"};

    cout << "v1:" << v1.size() << endl;
    for (auto i : v1) cout << i << " ";
    cout << endl;

    cout << "v2:" << v2.size() << endl;
    for (auto i : v2) cout << i << " ";
    cout << endl;

    cout << "v3:" << v3.size() << endl;
    for (auto i : v3) cout << i << " ";
    cout << endl;

    cout << "v4:" << v4.size() << endl;
    for (auto i : v4) cout << i << " ";
    cout << endl;

    cout << "v5:" << v5.size() << endl;
    for (auto i : v5) cout << i << " ";
    cout << endl;

    cout << "v6:" << v6.size() << endl;
    for (auto i : v6) cout << i << " ";
    cout << endl;

    cout << "v7:" << v7.size() << endl;
    for (auto i : v7) cout << i << " ";
    cout << endl;

    cout << "v8:" << v8.size() << endl;
    for (auto i : v8) cout << i << " ";
    cout << endl;

    // Problem 4)
    int array_size = 10;
    int ia[array_size];
    for (int ix = 1; ix <= array_size; ++ix)
    ia[ix] = ix;


    return 0;
}