#include <cmath>
#include "teacher.h"


void Teacher::printInfo(){
    cout << "id:" << id << ",name:" << name << endl;
}

void Teacher::CountStudents() {
    this->num_of_students = 0;
    for (Course* crs: this->courses){
        this->num_of_students += crs->getNumStudents();
    }
}

void  Teacher::setCourses(vector<Course*> courses) {
    for(auto crs: courses){
        this->courses.push_back(crs);
    }
    this->num_of_courses = this->courses.size();
}

void  Teacher::CalcAvgGrade(){
    if (this->num_of_courses > 0) {
        float grade_sum = 0.0;
        for(Course* crs: this->courses){
            crs->calcGradeStat();
            grade_sum += crs->getGradeMean();
        }
        this->avg_grade = round(100*grade_sum/this->num_of_courses)/100;  
    } else {
        this->avg_grade = 0.0;
    }  
}

string Teacher::getReport(){
    CountStudents();
    CalcAvgGrade();
    stringstream out;
    out << "id:" << id << ", name:" << name << ", number of courses taught:" << num_of_courses << endl;
    for(Course* cr: this->courses) {
        out  << "course id:" << cr->getId();
        out  << ", course name:" << cr->getName();
        out  << ", course category:" << cr->getCategory();        
        out  << ", course grade mean:" << cr->getGradeMean() << endl;
    }    
    out << "Number of students:" << num_of_students << endl;
    out << "Average Grade among all courses by this teacher: " << avg_grade << endl;

    return out.str();
}