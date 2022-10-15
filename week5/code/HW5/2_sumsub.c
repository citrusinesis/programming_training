#include <stdio.h>

int main() {
    int a, b;
    printf("정수를 입력하시오: ");
    scanf("%d", &a);
    printf("정수를 입력하시오: ");
    scanf("%d", &b);

    if (b > a) {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    printf("두 수의 합은 %d입니다.\n", a + b);
    printf("두 수의 합은 %d입니다.\n", a - b);
}