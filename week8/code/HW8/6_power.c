#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d ", power(3, i));
    }
    printf("\n");
}