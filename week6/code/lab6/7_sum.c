#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 0; i < 10; i++)
        sum += i;
    printf("1무터 10까지의 정수의 합: %d\n", sum);
}