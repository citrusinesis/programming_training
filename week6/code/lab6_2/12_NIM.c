#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int stick = 12, input, com;

    while (1) {
        printf("현재 스틱의 개수: %d\n", stick);
        printf("몇개의 스틱을 가져가시겠습니까?: ");
        scanf("%d", &input);

        stick -= input % 4;
        if (stick <= 0) {
            printf("당신이 이겼습니다!\n");
            break;
        }

        com = rand() % 4;
        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", com);

        stick -= com;
        if (stick <= 0) {
            printf("컴퓨터가 이겼습니다!\n");
            break;
        }
    }
}