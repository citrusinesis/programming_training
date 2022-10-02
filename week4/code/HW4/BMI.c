#include <stdio.h>

int main() {
    double height, weight;

    printf("체중을 입력하시오: ");
    scanf("%lf", &weight);
    printf("신장을 입력하시오(단위: 미터): ");
    scanf("%lf", &height);

    printf("BMI: %.2lf", weight / (height * height));
}