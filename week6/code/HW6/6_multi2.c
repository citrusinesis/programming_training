#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (!(i % 3) && !(i % 5))
            printf("%d ", i);
    }
}