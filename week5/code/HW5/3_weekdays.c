#include <stdio.h>

int main() {
    int day;
    printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오: ");
    scanf("%d", &day);

    if (!(day % 7) || day % 7 == 6)
        printf("주말입니다\n");
    else
        printf("주중입니다.\n");
}