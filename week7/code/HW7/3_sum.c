#include <stdio.h>

int main() {
    int size;
    printf("입력할 정수의 개수: ");
    scanf("%d", &size);

    int arr[size], input;
    for (int i = 0; i < size; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &input);
        arr[i] = input;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("합 = %d\n", sum);
}