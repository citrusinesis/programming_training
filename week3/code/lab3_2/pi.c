#include <stdio.h>
#define PI 3.14159265359

int main() {
    double radius;

    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    printf("원의 면적: %lf\n", radius * radius * PI);
}