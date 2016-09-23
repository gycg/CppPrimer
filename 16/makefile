#.outcutable files for this directory
OBJECTS = Array.out array-parms4.out \
		  compare.out compareDef.out compareSpec.out \
		  debug.out multiset.out overloaded.out overSpec.out qm.out \
		  SP.out special.out specialized.out \
		  useBlob.out useChcking.out #Vecmain.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../14

SP.o: DebugDelete.h

Vecmain.o: Vec.h

compareDef.out: compareDef.o ../14/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) compareDef.o ../14/Sales_data.o \
			-o compareDef.out

qm.out: qm.o build.o 
	$(CC) $(CCFLAGS) $(LOCFLAGS) qm.o build.o -o qm.out

specialized.out: debug.cc
	$(CC) -D SPECIALIZED $(CCFLAGS) $(LOCFLAGS) debug.cc -o specialized.out

overloaded.out: debug.o
	$(CC) -D OVERCHAR $(CCFLAGS) $(LOCFLAGS) debug.cc -o overloaded.out

debug.out: debug.o
	$(CC) -D DEBUG $(CCFLAGS) $(LOCFLAGS) debug.cc -o debug.out

multiset.out: multiset.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) multiset.o Sales_data.o \
	        -o multiset.out

