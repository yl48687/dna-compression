# DNA Compression
This project focuses on implementing compression and decompression algorithms for DNA strings using bitwise operators in the C programming language. The program accepts DNA strings via command line arguments and performs compression or decompression operations based on the provided flags.

## Design Overview
The program is structured into multiple files, including `compress.c`, `compress.h`, `decompress.c`, `decompress.h`, and `dna_processor.c`. Each file serves a specific purpose in the implementation of compression and decompression functionalities using bitwise operators. The `Makefile` is provided to compile the program efficiently.

## Functionality
`compress.c`:
- Implements compression of DNA strings using bitwise operators.
- Uses binary encoding for characters in DNA strings (A, T, C, G).
- Employs at least three different bitwise operators for compression.
- Ensures lossless compression, preserving all characters in the original DNA string.
- Calculates the number of bytes saved during compression for each input DNA string.

`decompress.c`:
- Implements decompression of compressed DNA strings using bitwise operators.
- Reconstructs the original DNA string from the compressed binary representation.
- Ensures that decompressed DNA strings match the original input DNA strings.
- Employs at least three different bitwise operators for decompression.

`dna_processor.c`:
- Contains the main function that processes command line arguments and passes them to appropriate functions implemented in `compress.c` or `decompress.c`.
- The main function is the only function in this file and cannot do more than processing command line arguments and passing them to other functions.
- Accepts DNA strings via command line arguments and performs compression or decompression operations based on provided flags.

## File Structure and Content
```
dna-compression/
├── compress.c
├── compress.h
├── decompress.c
├── decompress.h
├── Makefile
├── dna_processor.c
└── README.md
```
