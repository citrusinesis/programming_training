#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;

    printf("5개의 정수를 입력하시오: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("역순: ");
    for (int i = 4; i >= 0; i--)
        printf("%d ", p[i]);
    printf("\n");
}
