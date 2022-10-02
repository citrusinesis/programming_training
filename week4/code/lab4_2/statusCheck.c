#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int status = atoi(argv[1]);

    if (status > 0xFF)
        fprintf(stderr, "[*] Error: Out of Range\n");
    else if (status & 1)
        printf("True\n");
    else
        printf("False\n");
}