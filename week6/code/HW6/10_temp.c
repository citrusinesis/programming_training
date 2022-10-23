#include <stdio.h>

int main() {
    printf("=================\n");
    printf("화씨온도   섭씨온도\n");
    printf("=================\n");

    for (int i = 0; i <= 100; i += 10) {
        printf("%d  %d\n", i, (i - 32) * 5 / 9);
    }
}