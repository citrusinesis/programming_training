#include <stdio.h>

void getDivisor(int x) {
    printf("%dě ě˝ě: ", x);
    for (int i = 1; i <= x; i++) {
        if (!(x % i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() { getDivisor(8); }