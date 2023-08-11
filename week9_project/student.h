#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "person.h"
#include "course.h"
using namespace std;

// the class that stores data
class CourseGrade {
  public:
    int course_id;
    string course_name;
    string course_category;
    string teacher_name;    
    float grade;
    CourseGrade(int id, string s, string cat, string t_name, float g) {
        this->course_id = id;
        this->course_name = s;
        this->course_category = cat;
        this->teacher_name = t_name;
        this->grade = g;
    }
};

class Student: public Person {
  private:
      int id;
      int num_courses;
      std::vector<CourseGrade> grades;
      float avg_grade; // average grade in 100-scale
      float gpa;  // grade point average in 4.0-scale
  public:
      Student(string s) : Person(s) {}    // base constructor   
      Student(string s,int age): Person(s,age) {}    //base constructor    
      Student(string s,int id, int age):Person(s, age) {
        this->id = id;
      }    
      void inline setId(int id) {this->id = id;}
      int inline getId() {return id;}
      void inline setNumCourses(int n) { num_courses = n;}
      void inline setNumCourses() { num_courses = grades.size();}
      void recordGrade(int course_id, string course_name, string course_category, string teacher_name, float grd);
      void calcAvgGrade();
      void calcGPA();
      void printInfo();
      string getReport();
      string getReport2();

}; //class ends here

#endif
