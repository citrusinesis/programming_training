#include <stdio.h>

int main() {
    int input;
    printf("몇 번이나 반복할까요?: ");
    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        printf("안녕하세요?\n");
    }
}