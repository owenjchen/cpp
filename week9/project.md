
# Project - Student Report Management System

## Write a program that manages student reports in a school.  There should be 3 types of objects for this system: 

### Students:
1) Attributes:  
    - Name
    - grade
    - email
    - phone
    - courses taken
    - course grades
2) Methods:
    - add a student
    - update a student info
    - delete a student
    - register a course
    - unregister a course
    - record a grade for a course
    - Report the GPA for each student

### Courses:
1) Attributes:
    - course name
    - teacher name
    - enrolled students
    - student grades
2) Methods:
    - add a course
    - update a course
    - add a student to a course
    - assign a teacher to a course
    - record student grades
    - Report average, min and max grades
### Teachers:
1) Attributes:
    - Name
    - email
    - courses taught
2) Methods:    
    - add a teacher
    - assign a teacher to a course
    - report total number of students taught by a teacher
    - report each course average grade taught by the teacher
 
 ### Main Program

 #### Build the system from files:
    - Read students from a file: students.txt
    - Read courses from a file: courses.txt
    - Read teachers from a file: teachers.txt
    - Read the student-course enrollment from a file: course_registration.txt
    - Read teacher-course assignemtn from a file: teacher_assignment.txt
    - Read student grades from a file: course_grades.txt

 #### Produce Report Cards:
    - student report card: student name, list of courses taken, course grades and GPA
    - course report card: course name, number of students taken, student grades, min, max and average grades.
    - teacher report card: courses taught, course average grade,  total number of students enrolled.