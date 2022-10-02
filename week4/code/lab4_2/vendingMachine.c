#include <stdio.h>

int main() {
    int input, charge;
    printf("투입한 돈: ");
    scanf("%d", &input);
    printf("물건값: ");
    scanf("%d", &charge);

    int remainder = input - charge;
    printf("거스름돈: %d\n\n", remainder);
    printf("100원 동전의 개수: %d\n", (remainder % 1000) / 100);
    printf("10원 동전의 개수: %d\n", (remainder % 100) / 10);
}