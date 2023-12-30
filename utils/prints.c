#include <stdlib.h>
#include <stdio.h>
#include "sleep.h"
#include "file_reader.h"

#define clrscr() system("clear")


int print_title(){
    char* title;
    FILE *fptr = open_file("ascii_art/title.txt", "r"); 
    title = read_file(fptr);
    clrscr();
    
    for(int i = 0; i<100; i++)
        printf("\n");

    printf("%s\n", title);
    
    msleep(200);
    for(int i = 0; i<25; i++){
        printf("\n");        
        msleep(80);
    }
    clrscr();    
    return 0;
}
