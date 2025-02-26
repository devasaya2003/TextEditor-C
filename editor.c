#include "editor.h"
#include "input.h"
#include "screen.h"
#include "file_io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CTRL_KEY(k) ((k) & 0x1f)

char buffer[1024];
int bufIndex = 0;

void processKeypress() {
    char c = readKey();

    switch (c) {
    case CTRL_KEY('q'):
        clearScreen();
        printf("Exiting editor...\n");
        exit(0);
        break;

    case CTRL_KEY('s'):
        saveFile("output.txt", buffer);
        break;

    case 8: // Handle backspace (ASCII 8)
        if (bufIndex  > 0) {
            bufIndex --;
            buffer[bufIndex ] = '\0';
            printf("\b \b");
            fflush(stdout);
        }
        break;
    
    default:
        if (c >= 32 && c <= 126) {
            buffer[bufIndex ++] = c;
            buffer[bufIndex] = '\0';
            printf("%c", c);
            fflush(stdout);
        }
        else {
            printf("Action not supported!\n");
        }
        break;
    }
}