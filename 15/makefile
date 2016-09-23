#cutable files for this directory
OBJECTS = andQueryTest and_orQueryTest \
		  Basket_main wordQueryTest \
		  sample scope useQuote \
		  vecBasket virtualsNscope

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and  files
include ../GNU_makefile_template

LOCFLAGS = -I../12 -I../6

sample.o useQuote.o Quote.o: Quote.h
vecBasket.o Basket_main.o Basket.o: Basket.h Quote.h

get_print.o andQueryTest.o and_orQueryTest.o \
wordQueryTest.o Query.o: Query.h ../12/TextQuery.h

wordQueryTest: Query.o wordQueryTest.o ../12/TextQuery.o get_print.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Query.o wordQueryTest.o \
		../12/TextQuery.o get_print.o -o wordQueryTest

andQueryTest: Query.o andQueryTest.o ../12/TextQuery.o get_print.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Query.o andQueryTest.o \
		../12/TextQuery.o get_print.o -o andQueryTest

and_orQueryTest: Query.o and_orQueryTest.o ../12/TextQuery.o get_print.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Query.o and_orQueryTest.o \
		../12/TextQuery.o get_print.o -o and_orQueryTest

useQuote: useQuote.o Quote.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) useQuote.o Quote.o -o useQuote

vecBasket: Basket.o vecBasket.o Quote.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) vecBasket.o Basket.o Quote.o \
			-o vecBasket

Basket_main: Basket.o Basket_main.o Quote.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Basket_main.o Basket.o Quote.o \
			-o Basket_main

sample: sample.o Quote.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) sample.o Quote.o -o sample

