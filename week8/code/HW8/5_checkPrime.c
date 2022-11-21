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
    for (int i = 2; i <= 100; i++) {
        if (checkPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}