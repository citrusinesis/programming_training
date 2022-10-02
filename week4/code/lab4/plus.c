#include <stdio.h>

int main() {
    int x = 1, y;
    printf("x=%d y=%d\n", x, ++x);
    printf("x=%d y=%d\n", x, x++);
}