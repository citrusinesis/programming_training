#include <stdio.h>
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
    char board[10][10] = {{'#', '#', '#', '#', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.'},
                          {'#', '#', '#', '.', '#', '.', '.', '.', '.', '.'},
                          {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '.', '#', '.', '.', '#', '#', '.', '.'},
                          {'.', '.', '.', '.', '#', '.', '.', '.', '#', '#'},
                          {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '#', '#', '#', '#', '#'}};
    int xpos = 0, ypos = 1;
    board[ypos][xpos] = '@';

    while (1) {
        system("clear");
        printf("왼쪽이동:<-, 오른쪽 이동:-> 위쪽 이동:^, 아래쪽 이동:V\n");
        for (int y = 0; y < 10; y++) {
            for (int x = 0; x < 10; x++)
                printf("%c", board[y][x]);
            printf("\n");
        }

        board[ypos][xpos] = '.';
        int ch = getch();
        if (ch == 224) {
            int ch2 = getch();
            if (ch2 == 75)
                xpos--;
            else if (ch2 == 80)
                ypos++;
            else if (ch2 == 72)
                ypos--;
            else if (ch2 == 77)
                xpos++;
        }
        board[ypos][xpos] = '@';
    }
}