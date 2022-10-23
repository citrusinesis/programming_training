#include <stdio.h>

int main() {
    int f0 = 0, f1 = 1, f2 = 0, input;
    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        if (i == 0) {
            printf("0, ");
            continue;
        } else if (i == 1) {
            printf("1, ");
            continue;
        }

        f0 = f1 + f2;
        printf("%d, ", f0);
        f2 = f1;
        f1 = f0;
    }
    printf("\b\b");
}