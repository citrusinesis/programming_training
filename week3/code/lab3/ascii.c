#include <stdio.h>

int main() {
    char c;
    c = 'A';
    printf("A의 아스키코드 = %d\n", c);

    printf("문자를 입력하시오: ");
    c = getchar();

    printf("%c의 \"아스키\"코드 = %d\n", c, c);
}