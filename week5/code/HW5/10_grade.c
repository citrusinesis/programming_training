#include <stdio.h>

int main() {
    char grade;
    printf("수식을 입력하시오: ");
    scanf("%c", &grade);

    switch (grade) {
    case 'A':
    case 'a':
        printf("아주 잘했어요!\n");
        break;

    case 'B':
    case 'b':
        printf("좋습니다.\n");
        break;

    case 'C':
    case 'c':
        printf("만족스럽습니다.\n");
        break;

    case 'D':
    case 'd':
        printf("더 노력해보세요.\n");
        break;

    case 'F':
    case 'f':
        printf("안타깝습니다.\n");
        break;

    default:
        fprintf(stderr, "잘못된 입력값입니다.\n");
    }
}