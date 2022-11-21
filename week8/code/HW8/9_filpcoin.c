#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int filp() { return rand() % 2; }

int main() {
    srand(time(NULL));

    int input, cnt = 0;
    while (1) {
        printf("앞(0) 또는 뒤(1)을 선택하시오(종료는 -1): ");
        scanf("%d", &input);

        if (input == -1) {
            printf("당신이 이긴 횟수는 %d번 입니다.\n", cnt);
            exit(0);
        } else if (input != 0 && input != 1) {
            printf("잘못된 입력값입니다.\n");
            continue;
        } else if (input == filp()) {
            printf("당신이 이겼습니다.\n");
            cnt++;
        } else {
            printf("컴퓨터가 이겼습니다.\n");
        }
    }
}