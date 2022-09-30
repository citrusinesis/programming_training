#include <stdio.h>
#define PI 3.14159265359

int main() {
    long double radius, area, volume;

    printf("반지름을 입력하시오: ");
    scanf("%Lf", &radius);

    area = 4.0 * PI * (radius * radius);
    volume = 4.0 / 3.0 * PI * (radius * radius * radius);

    printf("구의 표면적: %Lf\n", area);
    printf("구의 부피: %Lf\n", volume);
}