#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printPath(char path[10]) {
    for (int i = 0; i < 10; i++)
        printf("%c", path[i]);
    printf("\n");
}

int main() {
    srand(time(NULL));
    int direction = 0, pos = rand() % 10;

    char path[10];
    for (int i = 0; i < 10; i++) {
        path[i] = '_';
    }
    path[pos] = '*';

    while (1) {
        if (rand() % 2) {
            if (pos != 9) {
                path[pos++] = '_';
                path[pos] = '*';
            }
        } else {
            if (pos != 0) {
                path[pos--] = '_';
                path[pos] = '*';
            }
        }

        printPath(path);
        getchar();
    }
}