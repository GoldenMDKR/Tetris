#ifndef FILE_READER
#define FILE_READER

#include <stdio.h>

// open a file (filename) with mode(mode)
// throw error if filename is incorrect or nonexistant
FILE* open_file(char* filename, char* mode);

// read the entire content of a file into a string
char* read_file(FILE* fd);

#endif