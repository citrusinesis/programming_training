#include <stdio.h>

int main() {
    double input, fuel = 1000;

    printf("초기연료량: %.0lf\n", fuel);
    while (1) {
        printf("연료 충전은 +, 연료 소모는 -로 입력해주세요: ");
        scanf("%lf", &input);

        fuel += input;
        printf("현재 남아있는 양은 %lf입니다.\n", fuel);
        if (fuel < 100) {
            printf("(경고) 연료가 10%%미만입니다.\n");
            break;
        }
    }
}