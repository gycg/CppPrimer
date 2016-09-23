#.outcutable files for this directory
OBJECTS = Animal.out book.out class.out \
		  ex-over.out inherit.out mi-scope.out\
		  over.out over2.out \
		  usingDirective.out virt-inherit.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../14

Animal.o: Animal.h
book.o: ../14/Sales_data.h bookexcept.h
virt-inherit.o: Animal_virtual_baseVers.h

book.out: book.o bookexcept.h ../14/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) book.o ../14/Sales_data.o -o book.out
