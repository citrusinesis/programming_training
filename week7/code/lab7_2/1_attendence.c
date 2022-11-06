#include <stdio.h>
#define SIZE 16

int main() {
    int attend[SIZE] = {0}, count = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i + 1);
        scanf("%d", &attend[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if (!attend[i]) {
            count++;
        }
    }

    double ratio = count / 16.0;
    if (ratio < 3.0)
        printf("수업 일수 부족입니다(%f%%). \n", 100.0 - ratio * 100.0);
}