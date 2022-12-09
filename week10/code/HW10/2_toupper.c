#include <ctype.h>
#include <stdio.h>

int main() {
    char buf[100] = {0};
    char *iter = buf;

    printf("텍스트를 입력하시오: ");
    scanf("%s", buf);

    printf("대문자 출력: ");

    do {
        printf("%c", toupper(*iter));
    } while (*iter++ != '\0');

    printf("\n");
}