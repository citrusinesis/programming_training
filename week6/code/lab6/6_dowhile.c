#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("1--파일열기\n");
        printf("2--파일저장하기\n");
        printf("3--종료\n");
        printf("하나를 선택하시오: ");
        scanf("%d", &i);
    } while (i < 1 || i > 3);

    printf("선택된 메뉴 = %d\n", i);
}