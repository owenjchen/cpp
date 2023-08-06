# executable files for this directory
OBJECTS = primeFactor.exe

# tells make to use the file "../makefile_template", which
# defines general rules for making .o and .exe files
include ../../makefile_template

primeFactor.exe: primeFactor_main.o factor.o primeFactor.o 
	$(CPP) $(CPPFLAGS) primeFactor_main.o factor.o primeFactor.o -o primeFactor.exe
