# executable files for this directory
OBJECTS = add_item.exe avg_price.exe \
		  useAccount.exe useDebug.exe useScreen.exe 

# tells make to use the file "..\MS_makefile_template", which
# defines general rules for making .o and .exe files
include ../../makefile_template

LOCFLAGS = -I../../

useScreen.o: Screen.h

add_item.o avg_price.o Sales_data.o: Sales_data.h
Account.o useAccount.o: Account.h
Debug.o useDebug.o: Debug.h

useAccount.exe: Account.o useAccount.o
	$(CPP) $(CPPFLAGS) useAccount.o Account.o -o useAccount.exe

useDebug.exe: Debug.o useDebug.o
	$(CPP) $(CPPFLAGS) useDebug.o Debug.o -o useDebug.exe

add_item.exe: add_item.o Sales_data.o
	$(CPP) $(CPPFLAGS) add_item.o Sales_data.o -o add_item.exe

avg_price.exe: avg_price.o Sales_data.o
	$(CPP) $(CPPFLAGS) avg_price.o Sales_data.o -o avg_price.exe
 
