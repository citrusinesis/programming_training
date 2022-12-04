/* 1_trim.c
#include <stdio.h>

int main() {
    char line[100] = "";
    char line2[100] = "";

    printf("문자열을 입력하시오: ");
    gets(line);
    int k = 0;
    for (int i = 0; line[i] != '\0'; ++i) {
        while (line[i] >= 'A' && line[i] <= 'z') {
            line2[k++] = line[i++];
        }
    }
    line2[k] = '\0';
    printf("출력 문자열: %s\n", line2);
    return 0;
}
*/

/* 2_password.c
#include <stdio.h>
#include <stdlib.h>
#include <termio.h>
#include <unistd.h>

int getch() {
    int ch;
    struct termios old, new;

    tcgetattr(0, &old);

    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    new.c_cc[VMIN] = 1;
    new.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &new);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &old);

    return ch;
}

int main() {
    char password[10];
    int i;

    system("clear");
    printf("패스워드를 입력하시오: ");

    for (i = 0; i < 8; i++) {
        password[i] = getch();
        printf("*");
    }

    password[i] = '\0';
    printf("\n");
    printf("입력된 패스워드는 다음과 같습니다: ");
    printf("%s\n", password);
    getch();
    return 0;
}
*/

/* 3_direction.c
#include <stdio.h>
#include <termio.h>
#include <unistd.h>

int getch() {
    int ch;
    struct termios old, new;

    tcgetattr(0, &old);

    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    new.c_cc[VMIN] = 1;
    new.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &new);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &old);

    return ch;
}

int main() {
    char board[10][10] = {{'#', '#', '#', '#', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.'},
                          {'#', '#', '#', '.', '#', '.', '.', '.', '.', '.'},
                          {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '.', '#', '.', '.', '#', '#', '.', '.'},
                          {'.', '.', '.', '.', '#', '.', '.', '.', '#', '#'},
                          {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '#', '#', '#', '#', '#'}};
    int xpos = 0, ypos = 1;
    board[ypos][xpos] = '@';

    while (1) {
        system("clear");
        printf("왼쪽이동:<-, 오른쪽 이동:-> 위쪽 이동:^, 아래쪽 이동:V\n");
        for (int y = 0; y < 10; y++) {
            for (int x = 0; x < 10; x++)
                printf("%c", board[y][x]);
            printf("\n");
        }

        board[ypos][xpos] = '.';
        int ch = getch();
        if (ch == 224) {
            int ch2 = getch();
            if (ch2 == 75)
                xpos--;
            else if (ch2 == 80)
                ypos++;
            else if (ch2 == 72)
                ypos--;
            else if (ch2 == 77)
                xpos++;
        }
        board[ypos][xpos] = '@';
    }
}
*/

/* 4_quiz.c
#include <stdio.h>
#include <string.h>

char *gets_s(char *s, int size) {
    int ch, cnt = 0;
    char *p = s;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (cnt++ >= size)
            break;
        *s++ = (char)ch;
    }

    fflush(stdout);
    *s = '\0';
    return p;
}

int main(void) {
    char key[] = "C";
    char buffer[80] = "";
    do {
        printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
        gets_s(buffer, sizeof(buffer));
    } while (strcmp(key, buffer) != 0);
    printf("맞았습니다!");
    return 0;
}
*/

/* 5_hangman.c
#include <stdio.h>
#include <string.h>
#include <termio.h>
#include <unistd.h>

int getch() {
    int ch;
    struct termios old, new;

    tcgetattr(0, &old);

    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    new.c_cc[VMIN] = 1;
    new.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &new);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &old);

    return ch;
}

int main() {
    char solution[100] = "meet at midnight";
    char answer[100] = "____ __ ________";
    char ch;
    int i;

    while (1) {
        printf("\n문자열을 입력하시오: %s \n", answer);
        printf("글자를 추측하시오: ");
        ch = getch();
        for (i = 0; solution[i] != '\0'; i++) {
            if (solution[i] == ch)
                answer[i] = ch;
        }
        if (strcmp(solution, answer) == 0)
            break;
    }
    return 0;
}
*/

/* 6_anagram.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SOL "apple"

int main() {
    char s[100] = SOL;
    char ans[100];
    int i, len;
    len = strlen(s);
    for (i = 0; i < len; i++) {
        int pos1 = rand() % len;
        int pos2 = rand() % len;
        char tmp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = tmp;
    }
    do {
        printf("%s의 원래단어를 맞춰보세요: ", s);
        scanf("%s", ans);
    } while (strcmp(ans, SOL) != 0);
    printf("축하합니다. \n");
}
*/

/* 7_menu.c
#include <stdio.h>

int main() {
    int i;
    char menu[5][10] = {
        "init", "open", "close", "read", "write",
    };
    for (i = 0; i < 5; i++)
        printf("%d 번째 메뉴: %s \n", i, menu[i]);
}
*/

/* 8_dict.c
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main() {
    int i, index;
    char dic[WORDS][2][30] = {
        {"book", "책"},       {"boy", "소년"}, {"computer", "컴퓨터"},
        {"language", "언어"}, {"rain", "비"},
    };

    char word[30];
    printf("단어를 입력하시오:");
    scanf("%s", word);
    index = 0;

    for (i = 0; i < WORDS; i++) {
        if (strcmp(dic[index][0], word) == 0) {
            printf("%s: %s\n", word, dic[index][1]);
            return 0;
        }
        index++;
    }

    printf("사전에서 발견되지 않았습니다.\n");
}
*/

/* 9_arrange.c
#include <stdio.h>
#define SIZE 6

int main() {
    int i, k;
    char fruits[SIZE][20] = {"pineapple", "banana", "apple",
                             "tomato",    "pear",   "avocado"};
    for (k = 0; k < SIZE; k++) {
        for (i = 0; i < SIZE - 1; i++) {
            if (strcmp(fruits[i], fruits[i + 1]) > 0) {
                char tmp[20];
                strcpy(tmp, fruits[i]);
                strcpy(fruits[i], fruits[i + 1]);
                strcpy(fruits[i + 1], tmp);
            }
        }
    }
    for (k = 0; k < SIZE; k++)
        printf("%s \n", fruits[k]);
}
*/

/* 10_encrypt.c
#include <stdio.h>

char *gets_s(char *s, int size) {
    int ch, cnt = 0;
    char *p = s;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (cnt++ >= size)
            break;
        *s++ = (char)ch;
    }

    fflush(stdout);
    *s = '\0';
    return p;
}

void encrypt(char cipher[], int shift) {
    int i = 0;

    while (cipher[i] != '\0') {
        if (cipher[i] >= 'A' && cipher[i] <= 'z') {
            cipher[i] += shift;
            if (cipher[i] > 'z') {
                cipher[i] -= 26;
            }
        }
        i++;
    }
}

void main() {
    char cipher[50];
    int shift = 3;

    printf("암호화할 암호문 = ");
    gets_s(cipher, 50);
    encrypt(cipher, shift);

    printf("XOR KEY = 123456\n");
    printf("암호된 문장 = %s", cipher);
}
*/

/* 11_compress.c
#include <stdio.h>
#include <string.h>

int main() {
    int len;
    int count = 0;
    char arr[1000];
    printf("압축할 문장 입력: ");
    scanf("%s", arr);
    len = strlen(arr);

    for (int i = 0; i < len; i++) {
        count++;

        if (arr[i] != arr[i + 1]) {
            if (count == 1) {
                printf("%c", arr[i]);
            } else {
                printf("%d%c", count, arr[i]);
            }
            count = 0;
        }
    }
    return 0;
}
*/

