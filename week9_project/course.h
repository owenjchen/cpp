#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <string>
#include <sstream>
using namespace std;

// the StudentGrade class that stores a student id and a grade
class StudentGrade {
  public:
    int student_id;
    float grade;
    StudentGrade(int id, float g) {
      this->student_id = id;
      this->grade = g;
  }
};

class Course
{
  private:
      int id;
      string name;
      string category;
      int num_of_students;
      int teacher_id;
      string teacher_name;
      std::vector<StudentGrade> student_grades;
      float grade_stat[3]{1000, 0, 0}; //min, max and mean of all student grades

  public:
      Course(string s): name(s){
        num_of_students=0;
        }              //constructor 1
      Course(string s, int i) {                //constructor 2 
        this->name = s;
        this->id = i; 
        num_of_students = 0; 
      }     
      Course(string s, int i, string cat) {    //constructor  3
        this->name = s;
        this->id = i; 
        this->category = cat; 
        num_of_students = 0; 
      } 
      int inline getId() { return id;} 
      void inline setId(int id) {this->id = id;}
      string inline getName() { return name;}     
      void inline setName(string name) {this->name = name;}  
      string inline getCategory() { return category;} 
      void inline setCategory(string category) {this->category = category;} 
      int inline getTeacherId() { return teacher_id;}     
      void inline setTeacherId(int id) {this->teacher_id = id;}
      void inline setTeacherName(string name) {this->teacher_name = name;}
      string getTeacherName() { return teacher_name;}
      float* getGradeStat() {return grade_stat;}
      float inline getGradeMean() {return grade_stat[2];}
      void inline setNumStudents(int n) {
        student_grades.reserve(n);
        num_of_students = n;
      }
      int inline getNumStudents() {
        return num_of_students;
      }      
      void inline updateNumStudents() {
        if (num_of_students != student_grades.size())
          num_of_students = student_grades.size();
      }    
      void recordStudentGrades(int student_id, float grade); //record each student grade
      void printInfo();
      void calcGradeStat(); // calculate course min, max and mean grade
      string getReport();
}; //class ends here


#endif
