#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    while (i <= 1000) {
        sum += i;
        i++;
    }
    printf("합은 %d입니다.\n", sum);
}