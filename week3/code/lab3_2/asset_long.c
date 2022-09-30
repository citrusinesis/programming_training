#include <stdio.h>

int main() {
    int savings;

    printf("매달 저축 금액을 입력하시오: ");
    scanf("%d", &savings);

    printf("30년 후의 재산 = %d원", savings * 12 * 30);
}