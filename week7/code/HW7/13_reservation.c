#include <stdio.h>
#include <stdlib.h>

void showReservation(int table[10]) {
    printf("-------------------------------------\n");
    printf("\t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n\t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");
}

int main() {
    int table[10] = {0};

    while (1) {
        char toRes;
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        getchar();
        scanf("%c", &toRes);

        if (toRes == 'n')
            exit(0);

        int pos;
        printf("몇번째 좌석을 예약하시겠습니까? ");
        scanf("%d", &pos);

        if (table[pos] == 1)
            printf("이미 예약된 좌석입니다.\n");
        else {
            table[pos] = 1;
            printf("예약되었습니다.\n");
        }

        showReservation(table);
    }
}