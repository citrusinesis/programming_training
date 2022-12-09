#include <stdio.h>
#include <string.h>

int main() {
    printf("문자열을 입력하시오: ");
    char input[256], list[5][256];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    for (int i = 0; i < 5; i++) {
        sprintf(list[i], "%s%d.png", input, i);
    }

    for (int i = 0; i < 5; i++) {
        printf("%s ", list[i]);
    }
    printf("\n");
}