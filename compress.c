#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Converts a dna string given as an argument in the main method into a
 * compressed form containing integers.
 */
void compress (char * dna) {
    // Length of the given dna string
    int length = strlen(dna);
    printf("%d ", length);

    // Counts the current evaluating index of the dna string
    int no = 0;
    int charCount = 0;

    // Uses bitwise operator to convert each dna character into an integer.
    while (* dna) {
        if (dna[0] == 'A') {
                no = (no << 2);
        } else if (dna[0] == 'T') {
                no = (no << 2) | 1;
        } else if (dna[0] == 'C') {
                no = (no << 2) | 2;
        } else if (dna[0] == 'G') {
                no = (no << 2) | 3;
        } // if

        charCount++;
        dna++;

        if (charCount == 4) {
            printf("%d ", no);
            no = 0;
            charCount = 0;
        } // if
    } // while

    // Pads the bitstring with extra zeros if the it does not contain
    // total of 8 bits. Then converts the bitstring into an integer.
    if (charCount > 0) {
        no = no << (4 - charCount) * 2;
        printf("%d", no);
    } // if
} // compress
