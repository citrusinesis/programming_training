#include <stdio.h>
#include <stdlib.h>
#include <termio.h>
#include <unistd.h>

int getch() {
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

int main() {
    char password[10];
    int i;

    system("clear");
    printf("패스워드를 입력하시오: ");

    for (i = 0; i < 8; i++) {
        password[i] = getch();
        printf("*");
    }

    password[i] = '\0';
    printf("\n");
    printf("입력된 패스워드는 다음과 같습니다: ");
    printf("%s\n", password);
    getch();
    return 0;
}