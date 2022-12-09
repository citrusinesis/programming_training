#include <ctype.h>
#include <stdio.h>

int main() {
    char buf[100] = {0};
    char *iter = buf;
    int alpha[26] = {0};

    printf("텍스트를 입력하시오: ");
    scanf("%s", buf);

    do {
        alpha[*iter - 97]++;
    } while (*iter++ != '\0');

    for (int i = 0; i < sizeof(alpha) / sizeof(int); i++)
        if (alpha[i])
            printf("%c문자가 %d번 등장하였음!\n", i + 97, alpha[i]);
}