#include <stdio.h>
#include <stdlib.h>

int balance = 0;
typedef void (*Action)();

int transaction(Action action) {
    int temp = balance, ret = 0;
    action();

    if (balance < 0) {
        printf("잔고 이상으로 인출할 수 없습니다.\n");
        balance = temp;
        ret = -1;
    }

    printf("새로운 잔고는 %d원 입니다.\n\n", balance);

    return ret;
}

void checkBalance() { printf("현재 잔고는 %d원 입니다.\n\n", balance); }

void deposit() {
    int amount;
    printf("[*] 입금 금액을 입력하시오. \n");
    scanf("%d", &amount);
    balance += amount;
}

void witdrawal() {
    int amount;
    printf("[*] 출금 금액을 입력하시오. \n");
    scanf("%d", &amount);
    balance -= amount;
}

void menu() {
    printf("****하나를 선택하시오****\n");
    printf("<1> 잔고 확인\n");
    printf("<2> 입금\n");
    printf("<3> 인출\n");
    printf("<4> 종료\n");
}

void menuSelect(int menuValue) {
    switch (menuValue) {
    case 1:
        checkBalance();
        break;

    case 2:
        transaction(deposit);
        break;

    case 3:
        transaction(witdrawal);
        break;

    case 4:
        exit(0);
        break;

    default:
        printf("잘못된 메뉴입니다. 다시 입력하세요.\n");
        break;
    }
}

int main() {
    int menuValue;
    printf("********Welcome to ATM********\n");

    while (1) {
        menu();
        scanf("%d", &menuValue);
        menuSelect(menuValue);
    }
}