#.outcutable files for this directory
OBJECTS = absInt.out add.out calc.out directcall.out \
		  fcnobj.out newcount-size.out readStr.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../1 -I../6

add.o directcall.o Sales_data.o: Sales_data.h

add.out: add.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add.o Sales_data.o -o add.out

directcall.out: directcall.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) directcall.o Sales_data.o -o directcall.out
