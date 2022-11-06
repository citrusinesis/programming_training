#include <stdio.h>
#define SIZE 5

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int list[SIZE] = {16, 7, 9, 1, 3}, tmp, counter;

    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");

    for (int k = 0; k < SIZE; k++) {
        counter = 0;
        for (int i = 0; i < SIZE - k - 1; i++) {
            if (list[i] > list[i + 1])
                swap(list + i, list + (i + 1));
            counter++;
        }
        if (!counter) {
            printf("quick!\n");
            break;
        }
    }

    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");
}