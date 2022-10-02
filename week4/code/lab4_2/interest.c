#include <math.h>
#include <stdio.h>

int main() {
    int n = 382;
    long double p = 24.0, r = 0.06;

    printf("초기 저금액: %.1Lf\n", p);
    printf("이율: %.2Lf\n", r);
    printf("저축기간: %d\n", n);

    long double total = p * (powl(1.0 + r, n) - 1.0) / r;
    printf("%d년 후의 원리금 = %Lf\n", n, total);
}