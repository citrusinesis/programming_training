#include <stdio.h>

void swap(int x, int y) {
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

void swapCbr(int *px, int *py) {
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main() {
    int a = 10, b = 20;
    swapCbr(&a, &b);
    printf("swap() 호출후 a = %d b = %d\n", a, b);
}