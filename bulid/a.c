#include <math.h>
#include <stdio.h>

int main() {
    int period = 382;
    long double principal = 24.0, interestRate = 0.06;

    printf("초기 저금액: %Lf\n", principal);
    printf("이율: %Lf\n", interestRate);
    printf("저축기간: %d\n", period);

    long double total =
        principal * (powl(1.0 + interestRate, period) - 1.0) / interestRate;
    printf("%d년 후의 원리금 = %Lf\n", period, total);
}