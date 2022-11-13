#include <stdio.h>

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);

    if (input % 2) {
        printf("%d는 홀수입니다.\n", input);
    } else {
        printf("%d는 짝수입니다.\n", input);
    }
}