#.outcutable files for this directory
OBJECTS = erasemap.out map1.out \
		  multimap.out pair.out \
		  restricted_count.out setOps.out \
		  unorderedWordCount.out \
		  wcEx.out word_count.out word_transform.out


# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

# directory 7 has Sales_data code, 6 has make_plural function
LOCFLAGS = -I../7 -I../6

map1.out: map1.o ../7/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) map1.o ../7/Sales_data.o -o map1.out

