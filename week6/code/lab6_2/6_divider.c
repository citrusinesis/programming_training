#include <stdio.h>

int main(void) {
    int num, i = 1;
    printf("정수를 입력하시오:");
    scanf("%d", &num);
    while (i <= num) {
        if (num % i == 0)
            printf("%d ", i);
        i++;
    }
    printf("\n\n");
}