#include <stdio.h>
#include <string.h>

void clean(char *str) {
    char buffer[strlen(str) + 1];
    int pos = 0;
    int prev = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (!prev)
                buffer[pos++] = str[i];
            prev = 1;
        } else {
            buffer[pos++] = str[i];
            prev = 0;
        }
    }
    buffer[pos] = '\0';
}

int main() {
    char buf[100];

    printf("텍스트를 입력하시오: ");
    scanf("%s", buf);

    clean(buf);
    printf("공백이 제거된 텍스트: %s\n", buf);
}