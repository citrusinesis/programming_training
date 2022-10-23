#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);

    if (input == 1) {
        printf("%d는 소수가 아닙니다.\n", input);
        exit(0);
    }
    for (int i = 2; i < sqrt(input); i++) {
        if (input % i == 0) {
            printf("%d는 소수가 아닙니다.\n", input);
            exit(0);
        }
    }
    printf("%d는 소수입니다.\n", input);
}