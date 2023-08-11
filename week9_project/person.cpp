#include "person.h"

void Person::printInfo() {
    cout <<  "name:" <<  name  << ", age:"  << age << endl;
}  

string Person::getInfo() {
    return  "name:" + name + ", age:" + to_string(age);
}  