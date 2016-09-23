#.outcutable files for this directory
OBJECTS = buf.out clearIO.out fileIO.out add_item.out \
		  add_itemV2.out sstream.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../7

add_itemV2.out: add_itemV2.o ../7/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add_itemV2.o ../7/Sales_data.o \
		-o add_itemV2.out

add_item.out: add_item.o ../7/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add_item.o ../7/Sales_data.o \
		-o add_item.out
 
