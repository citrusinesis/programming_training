/* 1_charcnt.c
#include <ctype.h>
#include <stdio.h>

int main() {
    char buf[100] = {0};
    char *iter = buf;
    int alpha[26] = {0};

    printf("텍스트를 입력하시오: ");
    scanf("%s", buf);

    do {
        alpha[*iter - 97]++;
    } while (*iter++ != '\0');

    for (int i = 0; i < sizeof(alpha) / sizeof(int); i++)
        if (alpha[i])
            printf("%c문자가 %d번 등장하였음!\n", i + 97, alpha[i]);
}
*/

/* 2_toupper.c
#include <ctype.h>
#include <stdio.h>

int main() {
    char buf[100] = {0};
    char *iter = buf;

    printf("텍스트를 입력하시오: ");
    scanf("%s", buf);

    printf("대문자 출력: ");

    do {
        printf("%c", toupper(*iter));
    } while (*iter++ != '\0');

    printf("\n");
}
*/

/* 3_trim.c
#include <stdio.h>
#include <string.h>

void clean(char *str) {
    char buffer[strlen(str) + 1];
    int pos = 0;
    int prev = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (!prev)
                buffer[pos++] = str[i];
            prev = 1;
        } else {
            buffer[pos++] = str[i];
            prev = 0;
        }
    }
    buffer[pos] = '\0';
}

int main() {
    char buf[100];

    printf("텍스트를 입력하시오: ");
    scanf("%s", buf);

    clean(buf);
    printf("공백이 제거된 텍스트: %s\n", buf);
}
*/

/* 4_delete.c
#include <stdio.h>
#include <string.h>

int main() {
    printf("텍스트를 입력하시오: ");
    char str[256];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char buf[strlen(str) + 1];
    int pos = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u') {
            buf[pos++] = str[i];
        }
    }

    buf[pos] = '\0';

    printf("최종 텍스트: %s\n", buf);
}
*/

/* 5_password.c
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
*/

/* 6_cap.c
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
*/

/* 7_trim_right.c
void trim_right(char str[]) {
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == '\r') {
            str[i] = '\0';
            len--;
        } else {
            break;
        }
    }
}
*/

/* 8_trim_left.c
void trim_left(char str[]) {
    int len = strlen(str);
    int offset = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == '\r') {
            offset++;
        } else {
            break;
        }
    }

    if (offset > 0) {
        for (int i = 0; i < len; i++) {
            str[i] = str[i + offset];
        }
    }
}
*/

/* 9_capitalize.c
void capitalize(char str[]) {
    if (strlen(str) > 0) {
        str[0] = toupper(str[0]);
    }
}
*/

/* 10_palindrome.c
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
*/

/* 11_nameRecommend.c
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
*/

/* 12_chatbot.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void strip(char *str) { str[strcspn(str, "\n")] = 0; }

int main() {
    srand(time(NULL));

    char name[100] = {0};
    char *ansName[3] = {
        "I'm sorry %s, I didn't understand what you said.\n",
        "%s, I'm listening, Keep Going!\n",
        "%s So what's the next story?\n",
    };
    char *ans[3] = {
        "I'm sorry, I didn't understand what you said.\n",
        "I'm listening, Keep Going!\n",
        "So what's the next story?\n",
    };

    int flag = 0, ansNum = 0;

    while (1) {
        printf("> ");
        char input[256];
        fgets(input, sizeof(input), stdin);
        strip(input);

        if (!strcmp(input, "hi")) {
            printf("Hello! How are you today?\n");
        } else if (!strcmp(input, "how are you")) {
            printf("I'm doing well, thank you for asking!\n");
        } else if (!strcmp(input, "what's your name")) {
            printf("My name is Assistant. I am a chatbot program.\n");
            printf("What's your name?\n> ");
            fgets(name, sizeof(name), stdin);
            strip(name);
            flag = 1;
            printf("Alright!\nAny Question?\n");
        } else if (!strcmp(input, "bye")) {
            printf("Goodbye!\n");
            break;
        } else {
            if (flag)
                printf(ansName[rand() % 3], name);
            else
                printf(ans[rand() % 3]);
        }
    }
}
*/

