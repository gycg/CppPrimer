#cutable files for this directory
OBJECTS = bitfields calc dyn_cast enum enum-match \
		  memFN-bind typeid useScreen

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../14

Screen.o useScreen.o: Screen.h

useScreen: useScreen.o Screen.o 
	$(CC) $(CCFLAGS) useScreen.o Screen.o -o useScreen

