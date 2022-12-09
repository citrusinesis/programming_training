#include <ctype.h>
#include <stdio.h>
#include <string.h>

int isPalindrome(const char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    printf("문자열을 입력하시오: ");
    char input[256];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    if (isPalindrome(input)) {
        printf("%s는 회문입니다.\n", input);
    } else {
        printf("%s는 회문이 아닙니다.\n", input);
    }
}
