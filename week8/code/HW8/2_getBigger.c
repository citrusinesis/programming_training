#include <stdio.h>

double getBigger(double x, double y) { return x > y ? x : y; }

int main() {
    double x, y;
    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    printf("실수를 입력하시오: ");
    scanf("%lf", &y);

    printf("더 큰수는 %lf입니다.\n", getBigger(x, y));
}