# executable files for this directory
OBJECTS = bitfields.exe calc.exe dyn_cast.exe enum.exe enum-match.exe \
		  memFN-bind.exe tok2.exe typeid.exe useScreen.exe

# tells make to use the file "..\MS_makefile_template", which
# defines general rules for making .obj and .exe files
include ../makefile_template

LOCFLAGS = /I../14

Screen.obj useScreen.obj: Screen.h

useScreen.exe: Screen.obj useScreen.obj 
	$(CPP) $(CPPFLAGS) useScreen.obj Screen.obj 

