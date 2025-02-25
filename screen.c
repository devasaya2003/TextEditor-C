#include "screen.h"
#include <stdio.h>
#include <Windows.h>

void clearScreen() {
    system("cls");
}

void refreshScreen() {
    clearScreen();
    printf("Mini Text Editor - Type anything! (CTRL+S to save, CTRL+Q to quit)\n");
}