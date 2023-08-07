#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Person
{
  private:
    string name;
    int birthyear;
    char gender; 
  public:
    Person()                          //default constructor   
    {
      name = "unknown";
      birthyear = 0;
      gender = 'u';              
    }                         
    Person(string n, int y, char g)  //constructor
    { 
      name = n;
      birthyear = y;
      gender = tolower(g);
    }
    Person(const Person &St)    //copy constructor
    {
      name = St.name;
      birthyear = St.birthyear;
      gender = St.gender;
    }
    void setName(string s)
    {
      name = s;
    }
    void setBirthyear(int b)
    {
      birthyear = b;
    }
    // the declarations, the definitions are out of the class
    void setGender(char g)
    {
        gender = tolower(g);
    }
    
    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Born in year " << birthyear << endl;
        cout << "Gender: " << (gender == 'm' ? "Male" : gender == 'f' ? "Female": "other") << endl;
    }
};

#endif