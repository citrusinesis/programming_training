#include <stdio.h>

int main() {
    double number, sum = 0.0;

    for (int i = 1; i <= 10; i++) {
        printf("%d번째 실수를 입력하시오: ", i);
        scanf("%lf", &number);

        if (number < 0.0)
            break;
        sum += number;
    }

    printf("합계 = %lf\n", sum);
}