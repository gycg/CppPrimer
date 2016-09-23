#.outcutable files for this directory
OBJECTS = add_item.out avg_price.out \
		  useAccount.out useScreen.out 

# the corresponding source file uses c++ 11 features
C11_OBJECTS = useDebug.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../1

useScreen.out: Screen.h

Account.o useAccount.o: Account.h
Debug.o useDebug.o: Debug.h

useAccount.out: Account.o useAccount.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Account.o useAccount.o \
		-o useAccount.out

useDebug.out: Debug.o useDebug.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Debug.o useDebug.o -o useDebug.out

add_item.out: add_item.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) add_item.o Sales_data.o \
		-o add_item.out

avg_price.out: avg_price.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) avg_price.o Sales_data.o \
		-o avg_price.out
 
