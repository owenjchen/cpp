#include "student.h"
using namespace std;
void Student::setGender(char g)
{
    gender = tolower(g);
}
void Student::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "Born in year " << birthyear << endl;
    cout << "Gender: " << (gender == 'm' ? "Male" : gender == 'f' ? "Female": "other") << endl;
}
