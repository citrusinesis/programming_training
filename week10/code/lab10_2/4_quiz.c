#include <stdio.h>
#include <string.h>

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

int main(void) {
    char key[] = "C";
    char buffer[80] = "";
    do {
        printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
        gets_s(buffer, sizeof(buffer));
    } while (strcmp(key, buffer) != 0);
    printf("맞았습니다!");
    return 0;
}