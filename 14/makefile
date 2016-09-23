#cutable files for this directory
OBJECTS = absInt add calc directcall \
		  fcnobj newcount-size readStr

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../1 -I../6

add.o directcall.o Sales_data.o: Sales_data.h

add: add.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add.o Sales_data.o -o add

directcall: directcall.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) directcall.o Sales_data.o -o directcall
