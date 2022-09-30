#include <stdio.h>

int main() {
    int sum = 0, price, nights, days;

    printf("여행은 몇박인가요?: ");
    scanf("%d", &nights);
    days = nights + 1;

    printf("항공권 가격: ");
    scanf("%d", &price);
    sum += price;

    printf("호텔 1박 가격: ");
    scanf("%d", &price);
    sum += nights * price;

    printf("하루에 필요한 용돈: ");
    scanf("%d", &price);
    sum += days * price;

    printf("============================\n");
    printf("총 여행 비용: %d\n", sum);
    printf("============================\n");

    return 0;
}