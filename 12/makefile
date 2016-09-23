#cutable files for this directory
OBJECTS = allocPtr allocSP \
		  oknew querymain \
		  unique UP \
		  usealloc usealloc2 \
		  useBlob weak

# the corresponding source file uses c++ 11 features
C11_OBJECTS = release 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

# 7 has Sales_data files, 6 has make_plural
LOCFLAGS = -I../7 -I../6

TextQuery.o querymain.o: TextQuery.h QueryResult.h

querymain: querymain.o TextQuery.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) querymain.o TextQuery.o \
			-o querymain

