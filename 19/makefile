#.outcutable files for this directory
OBJECTS = bitfields.out calc.out dyn_cast.out enum.out enum-match.out \
		  memFN-bind.out typeid.out useScreen.out

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../14

Screen.o useScreen.o: Screen.h

useScreen.out: useScreen.o Screen.o 
	$(CC) $(CCFLAGS) useScreen.o Screen.o -o useScreen.out

