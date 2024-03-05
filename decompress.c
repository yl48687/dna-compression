#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Converts a list of integers given as arguments in the main method
 * into decompressed form of a dna string.
 */
void decompress (int n, char * argv[]) {
    char dnaCharacters[4] = "ATCG";
    int argvIndex = 3;
    int integer = atoi(argv[argvIndex]);
    int charIndex = 1;

    // Uses bitwise operator to convert each integer into a dna string.
    while (n > 0) {
        int atcg = (integer >> (4 - charIndex) * 2) & 0x3;
        printf("%c", dnaCharacters[atcg]);
        charIndex++;
        n--;

        // Proceeds to the next integer if there exists more integers provided.
        if ((charIndex > 4) && (n > 0)) {
            charIndex = 1;
            argvIndex++;
            integer = atoi(argv[argvIndex]);
        } // if
    } // while
} // decompress
