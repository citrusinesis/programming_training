#include <stdio.h>
#include <string.h>
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
    char solution[100] = "meet at midnight";
    char answer[100] = "____ __ ________";
    char ch;
    int i;

    while (1) {
        printf("\n문자열을 입력하시오: %s \n", answer);
        printf("글자를 추측하시오: ");
        ch = getch();
        for (i = 0; solution[i] != '\0'; i++) {
            if (solution[i] == ch)
                answer[i] = ch;
        }
        if (strcmp(solution, answer) == 0)
            break;
    }
    return 0;
}