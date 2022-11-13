#include <stdio.h>

int main() {
    int table[1000000] = {0};
    int input;
    printf("입력할 정수의 개수(100개 이내로): ");
    scanf("%d", &input);

    int a;
    for (int i = 0; i < input; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &a);
        table[a]++;
    }

    int cnt = 0;
    for (int i = 0; i < 1000000; i++) {
        if (!table[i])
            continue;
        printf("%d 값은 %d번 등장\n", i, table[i]);
    }
}