#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compress.h"
#include "decompress.h"

int main (int argc, char * argv[]) {
    if (strcasecmp(argv[1], "-c") == 0) {
        compress(argv[2]);
    } else {
        decompress(atoi(argv[2]), argv);
    } // if

    printf("\n");
    return 0;
} // main
