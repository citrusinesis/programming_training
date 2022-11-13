#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int dice[6] = {0};
    for (int i = 0; i < 60000; i++) {
        dice[rand() % 6]++;
    }

    printf("==================\n");
    printf("주사위면    빈도\n");
    printf("==================\n");

    for (int i = 0; i < 6; i++) {
        printf("%d  %d\n", i + 1, dice[i]);
    }
}