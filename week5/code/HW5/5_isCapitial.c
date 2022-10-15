#include <stdio.h>

int main() {
    char input;
    printf("문자를 입력하시오: ");
    scanf("%c", &input);

    if (input >= 0x41 && input <= 0x5A)
        printf("대문자입니다.\n");
    else if (input >= 0x61 && input <= 0x7A)
        printf("소문자입니다.\n");
    else
        printf("알파벳이 아닙니다.\n");
}