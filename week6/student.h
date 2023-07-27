#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Student
{
  private:
    string name;
    int birthyear;
    char gender; 
  public:
    Student()                          //default constructor   
    {
      name = "unknown";
      birthyear = 0;
      gender = 'u';              
    }                         
    Student(string n, int y, char g)  //constructor
    { 
      name = n;
      birthyear = y;
      gender = tolower(g);
    }
    Student(const Student &St)    //copy constructor
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
    void setGender(char gender);
    void printInfo();
};

#endif