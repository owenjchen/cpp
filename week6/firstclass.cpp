#include <iostream>
#include <string>
using namespace std;

class Student
{
  public:
    string name;
    int birthyear;
    char gender; 
    void setName(const string s)
    {
        name = s;
    }
    void setBirthyear(int b)
    {
        birthyear = b;
    }
    void setGender(char c)
    {
        gender = c;
    }
    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Born in " << birthyear << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main()
{
    Student st;
    st.setName("John");
    st.setBirthyear(2000);
    st.setGender('m');
    st.printInfo();    
    st.birthyear = 2001; // being changed directly since birthyear is a public member;
    st.printInfo();
    cout << "Student name is " << st.name << endl; 
    return 0;
}