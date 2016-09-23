#cutable files for this directory
OBJECTS = Array array-parms4 \
		  compare compareDef compareSpec \
		  debug multiset overloaded overSpec qm \
		  SP special specialized \
		  useBlob useChcking #Vecmain

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../14

SP.o: DebugDelete.h

Vecmain.o: Vec.h

compareDef: compareDef.o ../14/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) compareDef.o ../14/Sales_data.o \
			-o compareDef

qm: qm.o build.o 
	$(CC) $(CCFLAGS) $(LOCFLAGS) qm.o build.o -o qm

specialized: debug.cc
	$(CC) -D SPECIALIZED $(CCFLAGS) $(LOCFLAGS) debug.cc -o specialized

overloaded: debug.o
	$(CC) -D OVERCHAR $(CCFLAGS) $(LOCFLAGS) debug.cc -o overloaded

debug: debug.o
	$(CC) -D DEBUG $(CCFLAGS) $(LOCFLAGS) debug.cc -o debug

multiset: multiset.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) multiset.o Sales_data.o \
	        -o multiset

