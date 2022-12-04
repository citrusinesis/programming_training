/* 1_str.c
#include <stdio.h>

int main() {
    char str1[6] = "Seoul";
    char str2[3] = {'i', 's', '\0'};
    char str3[] = "the capital city of Korea.";

    printf("%s %s %s\n", str1, str2, str3);
}
*/

/* 2_strio.c
#include <stdio.h>

int main() {
    char str[] = "komputer";

    printf("%s\n", str);
    str[0] = 'c';
    printf("%s\n", str);
}
*/

/* 3_strlen.c
#include <stdio.h>

int main() {
    char str[] = "A barking dog never bites";
    int i = 0;

    while (str[i] != 0)
        i++;

    printf("문자열 %s의 길이는 %d입니다.\n", str, i);
}
*/

/* 4_getchar.c
#include <stdio.h>

int main() {
    int ch;
    ch = getchar();
    putchar(ch);
}
*/

/* 5_getch.c
#include <stdio.h>
#include <termio.h>
#include <unistd.h>

int getch(void) {
    int ch;
    struct termios old, new;

    tcgetattr(0, &old);

    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    new.c_cc[VMIN] = 1;
    new.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &new);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &old);

    return ch;
}

int putch(int c) {
    struct termio o, n;

    ioctl(1, TCGETA, &o);
    ioctl(1, TCGETA, &n);

    n.c_lflag &= ~(ICANON | ECHO);
    ioctl(1, TCSETA, &n);

    if (write(1, &c, 1) < 0)
        return -1;

    ioctl(1, TCSETA, &o);

    return c;
}

int main() {
    int ch;
    ch = getch();
    putch(ch);
}
*/

/* 6_people.c
#include <stdio.h>

int main() {
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? ");
    scanf("%s", name);

    printf("어디 사시나요? ");
    scanf("%s", address);

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
}
*/

/* 7_gets.c
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
*/

/* 8_strlen.c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcdefgh";
    int len = strlen(s);

    printf("문자열 %s의 길이=%d \n", s, len);
}
*/

/* 9_strcpy.c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dst[6];

    strcpy(dst, src);
    printf("복사된 문자열 = %s \n", dst);
}
*/

/* 10_strcat.c
#include <stdio.h>
#include <string.h>

int main() {
    char s[11] = "Hello";

    strcat(s, "World");
    printf("%s \n", s);
}
*/

/* 11_strcmp.c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[80];
    char s2[80];
    int result;

    printf("첫번째 단어를 입력하시오:");
    scanf("%s", s1, sizeof(s1));

    printf("두번째 단어를 입력하시오:");
    scanf("%s", s2, sizeof(s2));

    result = strcmp(s1, s2);
    if (result < 0)
        printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
    else if (result == 0)
        printf("%s가 %s와 같습니다.\n", s1, s2);
    else
        printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
}
*/

/* 12_sscanf.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char s[] = "100";
    char t[100] = "";
    int i;

    printf("%d \n", atoi("100"));
    sscanf(s, "%d", &i);
    sprintf(t, "%d", 100);
}
*/

/* 13_pointer.c
#include <stdio.h>
int main() {
    char s[] = "HelloWorld";
    char *p = "HelloWorld";
    s[0] = 'h';

    printf("포인터가 가리키는 문자열 = %s \n", p);
    p = "Goodbye";
    printf("포인터가 가리키는 문자열 = %s \n", p);
}
*/

