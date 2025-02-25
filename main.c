#include <stdio.h>
#include "editor.h"

int main() {

    printf("Mini Text Editor - Start typing! (Press CTRL+Q to quit)\n");

    while (1) {
        processKeypress();
    }

    return 0;
}