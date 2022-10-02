#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 3, result;

    printf("연산값: %d\n", a + b * c / d);
    printf("연산값: %d\n", (a + b) * c / d);

    result = a = b = 1;
    printf("연산값: %d\n", result);
}