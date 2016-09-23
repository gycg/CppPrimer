#cutable files for this directory
OBJECTS = erasemap map1 \
		  multimap pair \
		  restricted_count setOps \
		  unorderedWordCount \
		  wcEx word_count word_transform


# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

# directory 7 has Sales_data code, 6 has make_plural function
LOCFLAGS = -I../7 -I../6

map1: map1.o ../7/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) map1.o ../7/Sales_data.o -o map1

