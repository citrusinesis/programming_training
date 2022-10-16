#include <stdio.h>

int main() {
    int meter;
    int i = 0;

    while (i < 3) {
        meter = i * 1609;
        printf("%d마일은 %d미터입니다.\n", i, meter);
        i++;
    }
}