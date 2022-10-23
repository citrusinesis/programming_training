#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GOAL 250

int main() {
    int wallet = 50, bets = 0, win = 0;
    srand(time(NULL));

    printf("초기 금액 $%d\n목표 금액 $%d\n", wallet, GOAL);
    while (wallet > 0 && wallet < GOAL) {
        bets++;
        if ((double)rand() / RAND_MAX < 0.5) {
            wallet++;
            win++;
        } else
            wallet--;
    }

    printf("%d중의 %d번 승리\n", bets, win);
    printf("이긴 확률=%lf%%\n", (double)win / (double)bets * 100.0);
}