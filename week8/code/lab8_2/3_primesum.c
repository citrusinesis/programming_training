#include <stdio.h>

int checkPrime(int n) {
    int isPrime = 1;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main() {
    int n, flag = 0;
    printf("양의 정수를 입력하시오: ");
    scanf_s("%d", &n);
    for (int i = 2; i < n; i++) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", n);
    return 0;
}