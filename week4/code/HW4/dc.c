#include <stdio.h>

int main() {
    int price;
    double dcRate;

    printf("상품 가격을 입력하시오: ");
    scanf("%d", &price);
    printf("할인률을 입력하시오: ");
    scanf("%lf", &dcRate);

    printf("할인된 가격은 %.2lf입니다.\n", price * (1.0 - dcRate / 100.0));
}