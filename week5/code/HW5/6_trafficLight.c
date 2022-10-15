#include <stdio.h>

int main() {
    char input;
    printf("신호등의 색깔 입력(R, G, B): ");
    scanf("%c", &input);

    if (input == 'R' || input == 'r')
        printf("정지\n");
    else if (input == 'G' || input == 'g')
        printf("주의\n");
    else if (input == 'B' || input == 'b')
        printf("진행\n");
    else
        printf("잘못된 입력입니다.\n");
}