#include <stdio.h>
#define SIZE 9

int getArraySum(int *A, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int A[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(A, SIZE);
    printf("배열의 요소 합 = %d\n", getArraySum(A, SIZE));
}