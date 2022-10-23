#include <stdio.h>

int main() {
    int start, end, sum = 0;
    printf("시작정수: ");
    scanf("%d", &start);
    printf("종료정수: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        sum += i;
    }
    printf("%d에서 %d까지의 합 = %d\n", start, end, sum);
}