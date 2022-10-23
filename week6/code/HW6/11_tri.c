#include <stdio.h>

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}