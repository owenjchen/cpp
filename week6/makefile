# executable files for this directory
OBJECTS = student.exe

# tells make to use the file "../makefile_template", which
# defines general rules for making .o and .exe files
include ../makefile_template

student.exe: student_main.o student.o 
	$(CPP) $(CPPFLAGS) student_main.o student.o -o student.exe
