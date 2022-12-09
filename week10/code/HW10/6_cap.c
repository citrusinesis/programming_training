#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    printf("텍스트를 입력하시오: ");
    char input[256];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    if (strlen(input)) {
        input[0] = toupper(input[0]);
    }
    strcat(input, ".");

    printf("결과 텍스트 출력: %s\n", input);
}
