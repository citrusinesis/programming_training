#include <stdio.h>

int main() {
    double x, y;
    printf("두개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    printf("%lf + %lf = %lf\n", x, y, x + y);
    printf("%lf - %lf = %lf\n", x, y, x - y);
    printf("%lf * %lf = %lf\n", x, y, x * y);
    printf("%lf / %lf = %lf\n", x, y, x / y);
}