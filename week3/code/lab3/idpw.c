#include <stdio.h>

int main() {
    int id, pw;

    printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");
    printf("id: ____\b\b\b\b");
    scanf("%d", &id);

    printf("pw: ____\b\b\b\b");
    scanf("%d", &pw);

    printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pw);
}