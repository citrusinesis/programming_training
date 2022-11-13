#include <stdio.h>

int main() {
    int length;
    printf("입력할 정수의 개수(100개 이내로): ");
    scanf("%d", &length);

    int table[100000] = {0};

    for (int i = 0; i < length; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &table[i]);
    }

    int pos = 0;
    printf("삭제할 위치: ");
    scanf("%d", &pos);

    int tmp;
    for (int i = pos; i < length - 1; i++) {
        table[i] = table[i + 1];
    }
    table[length] = 0;

    printf("새로운 배열: ");
    for (int i = 0; i < length - 1; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");
}