#include <stdio.h>

int getInteger() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int getMax(int x, int y) { return x > y ? x : y; }

int main() {
    printf("두수의 합 = %d\n", getMax(getInteger(), getInteger()));
    return 0;
}