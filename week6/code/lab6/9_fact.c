#include <stdio.h>

int main() {
    int fact = 1, n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("%d!은 %d입니다.\n", n, fact);
}