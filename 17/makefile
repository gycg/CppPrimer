#cutable files for this directory
OBJECTS = badgetc bits findbook \
		  game getc getput manips \
		  normalInts no-skipws point \
		  prec rand1 rand2 rand4 \
		  rand6 seed seek setw \
		  skipws tuple 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../14 

findbook: findbook.o ../14/Sales_data.o
	$(CC) $(CCFLAGS) -o findbook findbook.o ../14/Sales_data.o

