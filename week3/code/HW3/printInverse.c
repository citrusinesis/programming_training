#include <stdio.h>

int main() {
    char a, b, c;

    printf("문자를 입력하시오: ");
    scanf("%c %c %c", &c, &b, &a);

    printf("문자: %c %c %c", a, b, c);
}