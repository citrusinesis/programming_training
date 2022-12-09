#include <stdio.h>
#include <string.h>

int main() {
    printf("텍스트를 입력하시오: ");
    char str[256];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char buf[strlen(str) + 1];
    int pos = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u') {
            buf[pos++] = str[i];
        }
    }

    buf[pos] = '\0';

    printf("최종 텍스트: %s\n", buf);
}
