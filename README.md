# DNA Compression

This project revolves around the development of a C program tailored to perform lossless text compression and decompression, specifically designed for DNA strings. The core functionality of the program hinges on the utilization of bitwise operators to encode DNA characters into binary representations, thus achieving compression without compromising data integrity. Here's an overview of the program's design and functionality:

## Design Overview
The program is structured to offer a command line interface, enabling users to interact with it conveniently. It employs modular design principles, organizing the codebase into multiple files, each responsible for a specific aspect of the compression and decompression process. By adopting this approach, the program ensures better code organization, scalability, and maintainability.

## Functionality
The program includes functions dedicated to compressing DNA strings using bitwise operators. These functions convert DNA characters (A, T, C, G) into their binary equivalents, effectively reducing the storage space required to store the DNA sequences.

In tandem with compression, the program features functions for decompressing previously compressed DNA strings. These functions reverse the compression process, reconstructing the original DNA sequences from their binary representations, thereby ensuring no loss of information.

## File Structure and Content
- **compress.c**: contains implementations of functions responsible for compressing DNA strings. It utilizes bitwise operators to convert DNA characters into binary representations, facilitating efficient compression. Additionally, any auxiliary functions required for compression are defined within this file.

- **compress.h**: provides function prototypes for the compression functionalities defined in compress.c. It serves as a blueprint for the functions implemented in **compress.c**, ensuring proper organization and separation of concerns.

- **decompress.c**: contains implementations of functions for decompressing previously compressed DNA strings. These functions reverse the compression process, reconstructing the original DNA sequences from their binary representations using bitwise operators. Similar to **compress.c**, any auxiliary functions necessary for decompression are defined within this file.

- **decompress.h**: declares function prototypes for the decompression functionalities implemented in **decompress.c**. It ensures consistency and clarity in function declarations across different parts of the program.

- **proj1.c**: houses the main function responsible for orchestrating the program's execution. It processes command line arguments, directs the flow of execution, and invokes the appropriate compression or decompression functions based on user input. This file strictly adheres to a concise and focused implementation approach.
