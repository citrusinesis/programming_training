#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll() { return rand() % 6 + 1; }

int sum() {
    int tmp, total = 0;

    printf("(");
    for (int i = 0; i < 3; i++) {
        tmp = roll();
        printf("%d", tmp);
        if (i != 2) {
            printf(", ");
        }
        total += tmp;
    }
    printf(")");

    return total;
}

int main() {
    srand(time(NULL));
    int user, com;

    printf("사용자 주사위=");
    user = sum();
    printf("=%d\n", user);

    printf("컴퓨터 주사위=");
    com = sum();
    printf("=%d\n", com);

    if (user > com)
        printf("사용자 승리\n");
    else
        printf("컴퓨터 승리\n");
}