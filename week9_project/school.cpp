// MAIN
#include <fstream>
#include <sstream>
#include "student.h"
#include "course.h"
#include "teacher.h"
using namespace std;

Student* findStudent(int id, vector<Student>& students) {
    for(int i = 0; i < students.size(); i++) {
        if (id == students[i].getId()) {
            return &students[i];
        }
    }
    return NULL;
}

Course* findCourse(int id, vector<Course>& courses) {
    for(int i = 0; i < courses.size(); i++) {
        if (id == courses[i].getId()) {
            return &courses[i];
        }
    }
    return NULL;
}

Teacher* findTeacher(int id, vector<Teacher>& teachers) {
    for(int i = 0; i < teachers.size(); i++) {
        if (id == teachers[i].getId()) {
            return &teachers[i];
        }
    }
    return NULL;
}

int readStudentFile(string filename, vector<Student>& students){
    int count = 0;
    string line, name, id, age;
    ifstream myfile(filename);
    if (myfile.is_open()) {
        getline(myfile, line);
		while(getline(myfile, line))
		{
            //convert a string into a stringstream;
			stringstream fields(line);
            getline(fields, id, ',');
            getline(fields, name, ',');
            getline(fields, age, ',');                        
            Student student(name, stoi(id), stoi(age));
			students.push_back(student);
            count++;
		}
        myfile.close();
	}
	else
		cout<<"Could not open file " << filename << " to read." << endl;
    return count;
}

int readCourseFile(string filename, vector<Course>& courses){
    int count = 0;
    string line, name, id, cat;
    ifstream myfile(filename);
    if (myfile.is_open()) {
        getline(myfile, line);
		while(getline(myfile, line))
		{
            //convert a string into a stringstream;
			stringstream fields(line);
            getline(fields, id, ',');
            getline(fields, name, ',');
            getline(fields, cat, ',');                        
            Course course(name, stoi(id), cat);
			courses.push_back(course);
            count++;
		}
        myfile.close();
	}
	else
		cout<<"Could not open file " << filename << " to read." << endl;
    return count;
}

Teacher readOneTeacher(string line, vector<Course>& courses) {
    string teacher_id, name, course_id;
    Course* course;
    vector<int> course_id_list;
    vector<Course*> course_list;
    //convert a string into a stringstream;
    stringstream fields(line);
    getline(fields, teacher_id, ',');
    getline(fields, name, ',');
    Teacher teacher(name, stoi(teacher_id));
    //course ids;
    course_id_list.clear();
    course_list.clear();
    while(getline(fields, course_id, ',')) {
        course_id_list.push_back(stoi(course_id));
    }
    teacher.setNumCourses(course_id_list.size());
    for(int id: course_id_list) {
        course = findCourse(id, courses);
        if (course)
            course->setTeacherId(stoi(teacher_id));
            course->setTeacherName(name);
            course_list.push_back(course);
    }
    teacher.setCourses(course_list);
    return teacher;
}

int readTeacherFile(string filename, vector<Teacher>& teachers, vector<Course>& courses){
    int count = 0;
    string line, name, id;
    ifstream myfile(filename);
    if (myfile.is_open()) {
        getline(myfile, line);
		while(getline(myfile, line))
		{
            Teacher teacher = readOneTeacher(line, courses);
            teachers.push_back(teacher);
            count++;
		}
        myfile.close();
	}
	else
		cout<<"Could not open file " << filename << " to read." << endl;
    return count;
}

int readGradeFile(string filename, vector<Student>& students, vector<Course>& courses){
    int count = 0;
    string line, cell;
    int student_id, course_id;
    float grade;
    Student* student(NULL);
    Course* course(NULL);
    ifstream myfile(filename);
    if (myfile.is_open()) {
        getline(myfile, line);
		while(getline(myfile, line))
		{
            //convert a string into a stringstream;
			stringstream fields(line);
            getline(fields, cell, ',');
            student_id = stoi(cell);
            getline(fields, cell, ',');
            course_id = stoi(cell);            
            getline(fields, cell, ',');
            grade = stof(cell);                
            student = findStudent(student_id, students);
            if (!student) {
                cout << "can't find student " << student_id  << endl;
                exit(5);
            }    
            course = findCourse(course_id, courses);
            if (!course) {
                cout << "can't find course " << course_id << endl;
                exit(5);
            }            
            student->recordGrade(course_id,  course->getName(), course->getCategory(), course->getTeacherName(),grade);
            course->recordStudentGrades(student_id, grade);
            count++;
		}
        myfile.close();
	}
	else
		cout<<"Could not open file " << filename << " to read." << endl;
    return count;    
}


int main(){
    vector<Student> students;
    vector<Course> courses;
    vector<Teacher> teachers;
    string student_file = "students.csv";
    string course_file = "courses.csv";
    string teacher_file = "teachers.csv";
    string grade_file = "student_grades.csv";    
    int num_students, num_courses, num_teachers, n;
    num_students = readStudentFile(student_file, students);
    cout << "number of students read:" << num_students << endl;
    for(auto st:students){
        st.printInfo();
    }
    num_courses = readCourseFile(course_file, courses);
    cout << "number of courses read:" << num_courses << endl;    
    for(auto cr:courses){
        cr.printInfo();
    }    
    num_teachers = readTeacherFile(teacher_file, teachers, courses);
    cout << "number of teachers read:" << num_teachers << endl;   

    n = readGradeFile(grade_file, students, courses);
    cout << "number of grade records read:" << n << endl;   
    
    //Produce Reports;
    cout << "------ Student Report Cards ------" << endl;
    for(auto st: students) {
        cout << st.getReport();
        cout << "-----------------------------" << endl;
    }
    cout << endl << "------Student Report Cards (Version 2)------" << endl;
    for(auto st: students) {
        cout << st.getReport2();
        cout << "-----------------------------" << endl;
    }
    cout << endl << "------ Course Report Cards ------" << endl;
    for(auto cr: courses) {
        cout << cr.getReport();
        cout << "-----------------------------" << endl;        
    }
    cout << endl << "------ Teacher Report Cards ------" << endl;
    for(auto tch: teachers) {
        cout << tch.getReport();
        cout << "-----------------------------" << endl;        
    }    
    return 0;
}
