#include <stdio.h>
#define SIZE 10

int main() {
    int target, table[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("[ ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", table[i]);
    }
    printf("]\n");

    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &target);

    for (int i = 0; i < SIZE; i++) {
        if (target == table[i]) {
            printf("탐색 성공 인덱스 = %d\n", i);
            break;
        }
    }
}