#include <stdio.h>
#define EXCHRATE 1395
// 2022-09-22 기준 달러당 1394.94원

int main() {
    int amount;

    printf("달러화 금액을 입력하시오: ");
    scanf("%d", &amount);

    printf("달러화 %d$는 %d₩입니다.", amount, amount * EXCHRATE);
}