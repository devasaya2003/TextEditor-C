#include "file_io.h"
#include <stdio.h>

void saveFile(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if(file) {
        fputs(content, file);
        fclose(file);
        printf("\nFile saved: %s\n", filename);
    } else {
        printf("\nError saving file!\n");
    }
}