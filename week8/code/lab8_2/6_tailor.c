#include <stdio.h>
#include <stdlib.h>

double factorial(int n) {
    double result = 1.0;
    if (n <= 1)
        return 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

double power(int x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main(void) {
    double sum = 0.0;
    int x, n;
    printf("x와 n의 값을 입력하시오: ");
    scanf("%d %d", &x, &n);
    for (int i = 0; i <= n; i++)
        sum += power(x, i) / factorial(i);
    printf("e^%d = %.3lf\n", x, sum);
    return 0;
}