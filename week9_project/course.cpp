#include <iostream>
#include <cmath>
#include "course.h"

void Course::printInfo(){
    cout << "id:" << id << ",name:" << name << ",category:" << category << endl;
}

void Course::recordStudentGrades(int student_id, float grade) {
    StudentGrade sg(student_id, grade);
    this->student_grades.push_back(sg);
    this->num_of_students++;
}

void Course::calcGradeStat() {
    float grade_sum = 0.0;
    int count = 0;
    for(auto st: student_grades) {
        grade_sum += st.grade;
        count++;
        if (st.grade < grade_stat[0])  // min
            grade_stat[0] = st.grade;
        if (st.grade > grade_stat[1])  // max
            grade_stat[1] = st.grade;
    }
    if (count>0) {
        grade_stat[2] = round(100*grade_sum/count)/100;  //mean - round to 2 decimals.
    }
}

string Course::getReport(){
    calcGradeStat();
    stringstream out;
    out << "id:" << id << ", name:" << name << ", category:"  << category << ", teacher name:" << teacher_name << endl;
    for(auto grade: student_grades) {
        out  << "student id: " << grade.student_id
             << ", grade:" << grade.grade << endl;
    }    
    out << "Number of students:" << num_of_students << endl
        << "grade min: " << grade_stat[0] 
        << ", grade max: " << grade_stat[1]
        << ", grade mean: " << grade_stat[2] << endl;

    return out.str();
}