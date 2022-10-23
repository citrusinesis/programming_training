#include <stdio.h>

int main() {
    int input;
    for (int i = 0; i < 10; i++) {
        printf("데이터를 입력하시오: ");
        scanf("%d", &input);

        for (int j = 0; j < input; j++)
            printf("*");
        printf("\n");
    }
}