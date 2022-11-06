#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    srand(time(NULL));
    int prices[SIZE] = {0}, min;

    printf("[ ");
    for (int i = 0; i < SIZE; i++) {
        prices[i] = rand() % 1000;
        printf("%d ", prices[i]);
    }
    printf("]\n");

    min = prices[0];
    for (int i = 1; i < SIZE; i++) {
        if (prices[i] < min)
            min = prices[i];
    }

    printf("최솟값은 %d입니다.\n", min);
}