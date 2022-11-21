#include <stdio.h>

int save(int amount) {
    static int balance = 0;
    balance += amount;
    return balance;
}

int main() {
    int input;
    while (1) {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%d", &input);
        if (input < -1) {
            printf("잘못된 입력값 입니다.\n");
            continue;
        } else if (input == -1) {
            break;
        } else {
            printf("지금까지의 저축액은 %d원 입니다.\n", save(input));
        }
    }
}

// (c) 전역변수를 이용해야 두 함수 모두 계좌에 접근 가능.