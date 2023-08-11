#include <cmath>
#include "student.h"

// the class that stores data

void Student::printInfo(){
    cout << "id:" << id << ",name:" << name << ",age:" << age << endl;
}
void Student::recordGrade(int course_id, string course_name, string course_category, string teacher_name, float grade){
    CourseGrade course_grade(course_id,course_name, course_category, teacher_name, grade);
    this->grades.push_back(course_grade);
}

void Student::calcAvgGrade() {
    float grade_sum = 0.0;
    for (auto grade: grades){
      grade_sum += grade.grade;
    }
     this->avg_grade = round(1000*grade_sum/grades.size())/1000;
  }

void Student::calcGPA() {
    if (grades.size() >1) {
        float grade_sum = 0.0;
        for (auto grade: grades){
            if (grade.grade >= 90.0)
                grade_sum += 4.0;
            else if (grade.grade >= 80.0)            
                grade_sum += 3.0;
            else if (grade.grade >= 70.0)
                grade_sum += 2.0;  
            else if (grade.grade >= 60.0)
                grade_sum += 1.0;                                       
        }
        this->gpa = round(100*grade_sum / grades.size())/100;
    }
}

string Student::getReport(){
    setNumCourses();
    calcAvgGrade();
    calcGPA();
    string grade_report = "id:" + to_string(id) + ", name:" + name + ", age:" + to_string(age) + "\n";
    for(auto grade: grades) {
        grade_report +=  "course id: " + to_string(grade.course_id);
        grade_report +=  ", course name:" + grade.course_name;
        grade_report +=  ", course categroy:" + grade.course_category;
        grade_report +=  ", teacher_name:" + grade.teacher_name;
        grade_report +=  ", course grade:" + to_string(grade.grade) + "\n";
    }
    grade_report += "Number of courses taken:" + to_string(num_courses) + "\n";
    grade_report += "Average Grade: " + to_string(avg_grade) + ", GPA: " + to_string(gpa) + "\n";
    return  grade_report;
}

string Student::getReport2(){
    setNumCourses();
    calcAvgGrade();
    calcGPA();
    stringstream out;
    out << "id:" << id << ", name:" << name << ", age:"  << age << endl;
    for(auto grade: grades) {
        out  << "course id: " << grade.course_id
             << ", course name:" << grade.course_name
             << ", course grade:" << grade.grade << endl;
    }    
    out << "Number of courses taken:" << num_courses << endl
        << "Average Grade: " << avg_grade 
        << ", GPA: " << gpa << endl; 
    return out.str();
}