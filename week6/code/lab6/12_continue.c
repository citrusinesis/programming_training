#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1)
            continue;
        printf("정수: %d\n", i);
    }
}