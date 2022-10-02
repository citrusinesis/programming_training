#include <stdio.h>

int main() {
    int input, pos;

    printf("숫자를 입력하시오: ");
    scanf("%d", &input);
    printf("n을 입력하시오: ");
    scanf("%d", &pos);

    printf("새로운 값= %d", (0x1 << pos) | input);
}