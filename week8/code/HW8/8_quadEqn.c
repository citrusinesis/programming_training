#include <math.h>
#include <stdio.h>

void quadEqn(double a, double b, double c) {
    if (pow(b, 2) - 4 * a * c < 0) {
        printf("근이 없습니다.\n");
    }

    printf("첫 번째 근=%lf\n", (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a);
    printf("두 번째 근=%lf\n", (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a);
}

int main() {
    double a, b, c;
    printf("2차 방정식의 계수를 입력하시오:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    quadEqn(a, b, c);
}