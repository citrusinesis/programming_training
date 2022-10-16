#include <stdio.h>
int main(void) {
    long long num;
    int count = 0;
    printf("정수를 입력하시오: ");
    scanf("%lld", &num);
    do {
        count++;
        num /= 10;
    } while (num != 0);
    printf("총 자리수: %d", count);
}