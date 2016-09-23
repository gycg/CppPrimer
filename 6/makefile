#cutable files for this directory
OBJECTS = arrRet count-calls errMsg_initList \
		  fact fcnptrRet good_printmain \
		  inline_shorter mainmath mainret \
		  mk_plural ref-fcn refparms refret-ex  \
		  reset stl-arr-fcns usefcnptr wdebug

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = 

fact.o mainmath.o LocalMath.o: LocalMath.h

fact: fact.o LocalMath.o
	$(CC) $(CCFLAGS) fact.o LocalMath.o -o fact

mainmath: mainmath.o LocalMath.o 
	$(CC) $(CCFLAGS) mainmath.o LocalMath.o -o mainmath

