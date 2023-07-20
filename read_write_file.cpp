// Read a text file by line and save to a vector of strings
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main () {
    string filename = "read_write_file.cpp";
    string fileout = filename.substr(0, filename.find('.')) + ".txt";
    string line;
    vector<string> mylines;  
    ifstream myfile(filename);
    ofstream myfileout(fileout);
    if (myfile.is_open()){
        while (getline(myfile,line))
        {
            mylines.push_back(line);
        }
        myfile.close();
        cout << "Here are lines stored in vector mylines:" << endl;
        for (auto l: mylines) {
            cout << l << endl;
        }
        if (myfileout.is_open()){
            for (auto l: mylines) {
                myfileout << l << endl;
            }  
            myfileout.close(); 
            cout << "Contents saved to output file " << fileout << endl;
        } else {
            cout << "Can not open " << fileout << " to write." << endl;
        }
    } else {
        cout << "Can not open " << filename << " to read." << endl; 
    }
    return 0;
}