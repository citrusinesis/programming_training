#include <stdio.h>

int main() {
    double input;

    printf("실수를 입력하시오: ");
    scanf("%lf", &input);

    printf("지수 형식으로는 %le입니다.", input);
}