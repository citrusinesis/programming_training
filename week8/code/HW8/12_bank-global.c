#include <stdio.h>

int balance = 0;

void save(int amount) { balance += amount; }

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
            save(input);
        }
        printf("지금까지의 저축액은 %d원 입니다.\n", balance);
    }
}