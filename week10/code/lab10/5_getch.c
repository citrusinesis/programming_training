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