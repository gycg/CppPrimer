#cutable files for this directory
OBJECTS = buf clearIO fileIO add_item \
		  add_itemV2 sstream

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../7

add_itemV2: add_itemV2.o ../7/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add_itemV2.o ../7/Sales_data.o \
		-o add_itemV2

add_item: add_item.o ../7/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add_item.o ../7/Sales_data.o \
		-o add_item
 
