#include <stdio.h>

int main() {
    int input;

    printf("숫자를 입력하시오: ");
    scanf("%d", &input);

    printf("LSB는 %d\n", input & 1);
}