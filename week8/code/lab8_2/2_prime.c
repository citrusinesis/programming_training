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
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);
    if (checkPrime(input) == 1)
        printf("소수입니다. \n");
    else
        printf("소수가 아닙니다. \n");
    return 0;
}