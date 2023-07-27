#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class Student
{
  private:
    string name;
    int birthyear;
    char gender; 
  public:
    Student()
    {
        name = "Unknown";
        birthyear = 0;
        gender = 'u';
        cout << "Constructor: Person()" << endl;
    }
    Student(const string name, int birthyear, char gender)
    {
        this->name = name;
        this->birthyear = birthyear;
        this->setGender(gender);
        cout << "Constructor: Student(const string,int,char)" << endl;
    }
    ~Student()
    {
        cout << "To destroy object: " << name << endl;
    }

    void setName(const string name)
    {
        this->name = name;
    }
    void setBirthyear(int birthyear)
    {
        this->birthyear = birthyear;
    }
    // the declarations, the definitions are out of the class
    void setGender(char gender);
    void printInfo();
};

void Student::setGender(char gender)
{
    this->gender = tolower(gender);
}

void Student::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "Born in year " << birthyear << endl;
    cout << "Gender: " << (gender == 'm' ? "Male" : gender == 'f' ? "Female": "other") << endl;
}


int main()
{
    Student * students = new Student[3]{
        {"Tom", 2000, 'm'},
        {"Bob", 2001, 'm'},
        {"Amy", 2002, 'f'},
    };

    for (int i = 0; i < 3; i++){
        cout << "Student " << i+1 << ":\n" ;
        students[i].printInfo();
    }
    delete []students;

    return 0;
}