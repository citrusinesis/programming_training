#include <stdio.h>

void sub() {
    int autoCount = 0;
    static int staticCount = 0;

    autoCount++;
    staticCount++;
    printf("autoCount = %d\n", autoCount);
    printf("staticCount = %d\n", staticCount);
}

int main() {
    sub();
    sub();
    sub();
}