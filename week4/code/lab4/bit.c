#include <stdio.h>

int main() {
    int x = 9, y = 10;

    printf("%08X & %08X = %08X\n", x, y, x & y);
    printf("%08X | %08X = %08X\n", x, y, x | y);
    printf("%08X ^ %08X = %08X\n", x, y, x ^ y);
    printf("~%08X = %08X\n", x, ~x);
}