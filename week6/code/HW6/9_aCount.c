#include <stdio.h>

int main() {
    int count = 0;
    char input;
    while (1) {
        printf("문자를 입력하시오: (종료 .) ");
        input = getchar();
        if (input == 'a')
            count++;
        else if (input == '.')
            break;
        getchar();
    }
    printf("a의 개수 = %d", count);
}