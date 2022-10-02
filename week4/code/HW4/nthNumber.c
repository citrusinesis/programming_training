#include <stdio.h>

int main() {
    int input;

    printf("정수를 입력하시오: ");
    scanf("%d", &input);

    printf("백의 자리수: %d\n", input / 100);
    printf("십의 자리수: %d\n", (input % 100) / 10);
    printf("백의 자리수: %d\n", (input % 100) % 10);
}