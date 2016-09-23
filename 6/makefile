#.outcutable files for this directory
OBJECTS = arrRet.out count-calls.out errMsg_initList.out \
		  fact.out fcnptrRet.out good_printmain.out \
		  inline_shorter.out mainmath.out mainret.out \
		  mk_plural.out ref-fcn.out refparms.out refret-ex.out  \
		  reset.out stl-arr-fcns.out usefcnptr.out wdebug.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = 

fact.o mainmath.o LocalMath.o: LocalMath.h

fact.out: fact.o LocalMath.o
	$(CC) $(CCFLAGS) fact.o LocalMath.o -o fact.out

mainmath.out: mainmath.o LocalMath.o 
	$(CC) $(CCFLAGS) mainmath.o LocalMath.o -o mainmath.out

