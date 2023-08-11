#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include "course.h"

// the class that stores data
class Teacher: public Person {
  private:
      int id;
      int num_of_courses;
      int num_of_students;
      float avg_grade;
      vector<Course*> courses;
  public:
      Teacher(string s):Person(s) {}                       //constructor   
      Teacher(string s, int i):Person(s)                  //constructor   
      {
        id = i;          
      }     
      //int setCourses(vector<string>& course_ids);
      string inline getName() {return name;}
      int inline getId() {return id;}
      void inline setNumCourses(int n) {num_of_courses = n;}
      void setCourses(vector<Course*> courses);
      void CountStudents();
      void CalcAvgGrade();
      void printInfo();
      string getReport();
}; //class ends here

#endif
