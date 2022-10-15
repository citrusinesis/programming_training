#include <stdio.h>

int main() {
    int a, b, c;
    printf("삼각형의 세변을 입력하시오 (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a == b * b) {
        if (a * a == c * c)
            printf("정삼각형\n");
        else
            printf("이등변 삼각형\n");
    } else if (b * b == c * c || a * a == c * c) {
        printf("이등변 삼각형\n");
    } else {
        printf("삼각형\n");
    }
}
