#include <stdio.h>

int main() {
    double input;

    printf("지수형식으로 실수를 입력하시오: ");
    scanf("%le", &input);

    printf("소수점 표시 형식으로는 %lf입니다.", input);
}