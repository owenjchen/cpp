#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

// the class that stores data
class Person {
    protected:
        string name;
        int age;
    public:
        Person() {
            name = "Unknown";
            age = 0;
        }
        Person(string s) : name(s){}         
        Person(string s, int a){
        name = s;
        age = a;          
        }     
        string inline getName() { return name;}
        void inline setName(string n) {name = n;}
        int inline getAge() { return age; }
        void printInfo();
        string getInfo();
}; //class ends here

#endif
