#include <stdio.h>

int getInteger() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int main() {
    printf("두수의 합 = %d\n", getInteger() + getInteger());
    return 0;
}