#include <stdio.h>
#include <stdlib.h>

char *gets_s(char *s, int size) {
    int ch, cnt = 0;
    char *p = s;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (cnt++ >= size)
            break;
        *s++ = (char)ch;
    }

    fflush(stdout);
    *s = '\0';
    return p;
}

int main() {
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? ");
    gets_s(name, 99);

    printf("어디 사시나요? ");
    gets_s(address, 99);

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
}