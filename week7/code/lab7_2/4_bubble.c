#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void visualize(int length) {
    for (int i = 0; i < length; i++)
        printf("*");
    printf("\n");
}

int main() {
    int list[SIZE] = {6, 7, 2, 4, 3, 9, 14, 5, 11, 10};

    for (int i = 0; i < SIZE; i++) {
        system("clear");
        printf("[*]Step %d\n", i + 1);
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (list[j] > list[j + 1])
                swap(list + j, list + j + 1);
        }

        for (int j = 0; j < SIZE; j++) {
            visualize(list[j]);
        }
        getchar();
    }
}