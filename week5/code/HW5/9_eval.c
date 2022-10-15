#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("수식을 입력하시오: ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        printf("%d\n", a / b);
        break;
    }
}