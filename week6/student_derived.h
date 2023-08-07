#include "person.h"
class Student : public Person {
    private:
        string school_name;
        vector<string> courses;
    public:
        Student() {}
        Student(string n, int y, char g) { Person(n, y, g);}
        Student(string n, int y, char g, string sch) { 
            Person(n, y, g);
            this->school_name = sch;
            }
        ~Student() {}
        setStudentname(string n) {
            setname(n);
        }

}