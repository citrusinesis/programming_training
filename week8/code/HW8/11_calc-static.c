#include <stdio.h>
#include <stdlib.h>

int calc() {
    static int cnt[4] = {0};
    int x, y;
    char op;
    scanf("%d %c %d", &x, &op, &y);

    switch (op) {
    case '+':
        printf("덧셈은 총 %d번 호출되었습니다.\n", ++cnt[0]);
        return x + y;
        break;

    case '-':
        printf("뺄셈은 총 %d번 호출되었습니다.\n", ++cnt[1]);
        return x - y;
        break;

    case '*':
        printf("곱셈은 총 %d번 호출되었습니다.\n", ++cnt[2]);
        return x * y;
        break;

    case '/':
        printf("나눗셈은 총 %d번 호출되었습니다.\n", ++cnt[3]);
        return x / y;
        break;

    default:
        printf("Invalid Operation\n");
        exit(-1);
        break;
    }
}

int main() {
    while (1) {
        printf("연산을 입력하시오(종료는 Ctrl-Z): ");
        printf("연산 결과: %d\n", calc());
    }
}