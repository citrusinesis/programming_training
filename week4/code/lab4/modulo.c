#include <stdio.h>
#define SEC_PER_MINUTE 60

int main() {
    int input;

    printf("초 단위의 시간을 입력하시오: (32억초 이하)");
    scanf("%d", &input);

    printf("%d초는 %d분 %d초 입니다.\n", input, input / SEC_PER_MINUTE,
           input % SEC_PER_MINUTE);
}