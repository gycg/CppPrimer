#.outcutable files for this directory
OBJECTS = badgetc.out bits.out findbook.out \
		  game.out getc.out getput.out manips.out \
		  normalInts.out no-skipws.out point.out \
		  prec.out rand1.out rand2.out rand4.out \
		  rand6.out seed.out seek.out setw.out \
		  skipws.out tuple.out 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .out files
include ../GNU_makefile_template

LOCFLAGS = -I../14 

findbook.out: findbook.o ../14/Sales_data.o
	$(CC) $(CCFLAGS) -o findbook findbook.o ../14/Sales_data.o

