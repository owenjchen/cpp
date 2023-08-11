# executable files for this directory
OBJECTS = school.exe

# tells make to use the file "../makefile_template", which
# defines general rules for making .o and .exe files
include ../makefile_template

school.exe: school.o course.o teacher.o student.o person.o
	$(CPP) $(CPPFLAGS) school.o course.o teacher.o student.o person.o -o school.exe
