#include <stdio.h>

int main() {
    char input;
    printf("문자를 입력하시오: ");
    scanf("%c", &input);

    if (input >= 0x30 && input <= 0x39)
        printf("숫자입니다.\n");
    else if (input >= 0x41 && input <= 0x5A || input >= 0x61 && input <= 0x7A)
        printf("알파벳입니다.\n");
    else
        printf("특수문자입니다.\n");
}