CC = gcc
DEBUG = -g

# If there exists a dwarf error, use -gdwarf-# -g
# where # is replaced by the version the program handles.

CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

Compile: dna_processor

dna_processor: dna_processor.o compress.o decompress.o
	$(CC) $(LFLAGS) -o dna_processor dna_processor.o compress.o decompress.o

dna_processor.o: dna_processor.c compress.h decompress.h
	$(CC) $(CFLAGS) dna_processor.c

compress.o: compress.c compress.h decompress.h
	$(CC) $(CFLAGS) compress.c

decompress.o: decompress.c compress.h decompress.h
	$(CC) $(CFLAGS) decompress.c

Run: dna_processor
	./dna_processor -c ATTCGG
	./dna_processor -d 3 132

Clean:
	rm -f *.o dna_processor