#.outcutable files for this directory
OBJECTS = allocPtr.out allocSP.out \
		  oknew.out querymain.out \
		  unique.out UP.out \
		  usealloc.out usealloc2.out \
		  useBlob.out weak.out

# the corresponding source file uses c++ 11 features
C11_OBJECTS = release.out 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

# 7 has Sales_data files, 6 has make_plural
LOCFLAGS = -I../7 -I../6

TextQuery.o querymain.o: TextQuery.h QueryResult.h

querymain.out: querymain.o TextQuery.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) querymain.o TextQuery.o \
			-o querymain.out

