#include <ctype.h>
#include <stdio.h>
#include <string.h>

int valid(char *password) {
    int flag[3] = {0};

    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            flag[0] = 1;
        } else if (islower(password[i])) {
            flag[1] = 1;
        } else if (isdigit(password[i])) {
            flag[2] = 1;
        }
    }

    return flag[0] && flag[1] && flag[2];
}

int main() {
    char password[256];

    while (1) {
        printf("암호를 생성하시오: ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = 0;

        if (valid(password)) {
            printf("적절한 암호입니다.\n");
            return 0;
        } else {
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
        }
    }
}
