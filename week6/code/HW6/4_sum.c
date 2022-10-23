#include <stdio.h>

int main() {
    int input, sum = 0;
    while (1) {
        printf("정수를 입력하시오: ");
        scanf("%d", &input);

        if (!input)
            break;
        sum += input;
    }
    printf("합계=%d\n", sum);
}