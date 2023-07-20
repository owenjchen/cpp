/*
8) Write a program to copy a vector of ints into an array of ints.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    vector<int> ivec;
    string s;
    int num;
    char c;    
    cout << "Please enter a list of integers separated by space (enter to finish):" << endl;
    getline(cin, s);

    //Convert a string to an istringstream object
    // The std::istringstream is a string class object which is used to stream the string into different variables 
    // and similarly files can be stream into strings. Objects of this class use a string buffer that contains a sequence
    // of characters. This sequence of characters can be accessed as a string object.
    istringstream iss(s);
    while(!iss.eof()) {
        iss >> num;
        ivec.push_back(num);
    }

    // Copy from a vector to an array
    int vsize = ivec.size();
    // use C-style array to dynamically allocate an array
    int iarr[vsize];
    //can not use C++ std:array to dynamically allocate an array
    //array<int vsize> iarr;
    cout << "The elements of the integer vector are: " << endl;
    for(int i=0; i < vsize; i++) {
        iarr[i] = ivec[i];
        cout<< iarr[i] << " ";  
    }
    cout << endl;  

    return 0;
}