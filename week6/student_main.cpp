#include "student.h"
using namespace std;
int main()
{
    Student st1;
    cout << "Student 1 (default values):" << endl;
    st1.printInfo();    
    st1.setName("John");
    st1.setBirthyear(2008);
    st1.setGender('M');
    cout << "Student 1:" << endl;
    st1.printInfo();

    Student st2("Tom", 2009, 'm');
    cout << "Student 2:" << endl;
    st2.printInfo();

    Student st3("Emma", 2010, 'F');
    cout << "Student 3:" << endl;
    st3.printInfo();

    Student st4(st2);
    cout << "Student 4 (copied from Student 2):" << endl;
    st4.printInfo();        
    return 0;
}
