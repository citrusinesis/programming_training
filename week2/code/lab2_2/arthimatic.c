#include <stdio.h>

int main() {
    int x, y, sum;

    printf("첫 번째 숫자를 입력하시오: ");
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하시오: ");
    scanf("%d", &y);

    printf("두수의 합 = %d\n", x + y);
    printf("두수의 차 = %d\n", x - y);
    printf("두수의 곱 = %d\n", x * y);
    printf("두수의 몫 = %d\n", x / y);

    return 0;
}