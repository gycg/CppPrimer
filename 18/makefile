#cutable files for this directory
OBJECTS = Animal book class \
		  ex-over inherit mi-scope\
		  over over2 \
		  usingDirective virt-inherit

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../14

Animal.o: Animal.h
book.o: ../14/Sales_data.h bookexcept.h
virt-inherit.o: Animal_virtual_baseVers.h

book: book.o bookexcept.h ../14/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) book.o ../14/Sales_data.o -o book
