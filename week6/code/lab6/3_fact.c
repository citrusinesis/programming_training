#include <stdio.h>

int main() {
    int i = 5;
    int factorial = 1;

    while (i >= 1) {
        factorial *= i;
        i--;
    }

    printf("%d\n", factorial);
}