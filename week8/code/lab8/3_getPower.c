#include <stdio.h>

int getInteger() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main() {
    int x = getInteger(), y = getInteger();
    printf("%d의 %d승 = %d\n", x, y, power(x, y));
    return 0;
}