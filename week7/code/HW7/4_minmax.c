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

    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("최댓값 = %d, 최솟값 = %d\n", max, min);
}