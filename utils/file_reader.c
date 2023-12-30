#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <string.h>

FILE* open_file(char* filename, char* mode){
    if (strlen(filename) == 0) 
        errx(1, "empty filename");
    FILE *fd;
    fd = fopen(filename, mode);
    if (fd == NULL) {
        errx(1, "cannot open file : %s", filename);
    }
    return fd;
}

char* read_file(FILE* fd){
    char* content = malloc(sizeof(char));
    char buffer[1024];
    char* to_add;
    while((to_add = fgets(buffer,1024,fd)) == buffer) {
            strcat(content, to_add);
    }
    return content;
}