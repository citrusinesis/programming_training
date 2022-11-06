#include <stdio.h>
#define SIZE 26

int main() {
    char codes[SIZE];

    for (int i = 0; i < SIZE; i++)
        codes[i] = 'a' + i;
    for (int i = 0; i < SIZE; i++)
        printf("%c ", codes[i]);
    printf("\n");
}