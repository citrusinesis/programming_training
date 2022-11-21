#include <stdio.h>

int showDigit(int x) {
    if ((x / 10) > 0) {
        showDigit(x / 10);
    }
    printf("%d ", x % 10);
}

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);
    showDigit(input);
    printf("\n");
}