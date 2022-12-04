/* 1_getArraySum.c
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
*/

/* 2_reverse.c
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
*/

/* 3_quadratic.c
#include <math.h>
#include <stdio.h>

void quadratic(int a, int b, int c, double *xplus, double *xminus) {
    *xminus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    *xplus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main() {
    int a = 1, b = 4, c = 3;
    double xplus = 0, xminus = 0;

    quadratic(a, b, c, &xplus, &xminus);

    printf("첫번째 실근: %lf\n", xplus);
    printf("두번째 실근: %lf\n", xminus);
}
*/

/* 4_get.c
#include <stdio.h>

void get(double value, int *iPart, double *fPart) {
    *iPart = (int)value;
    *fPart = value - (int)value;
}

int main() {
    double value = 3.14;
    int iPart;
    double fPart;

    get(value, &iPart, &fPart);

    printf("정수부=%d\n소수부=%lf", iPart, fPart);
}
*/

/* 5_imageProcessing.c
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEIGHT 10
#define WIDTH 10

void imageBrighten(char *p, int w, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (p[i * w + j] < 57)
                p[i * w + j]++;
        }
    }
}

void imageDarken(char *p, int w, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (p[i * w + j] > 48)
                p[i * w + j]--;
        }
    }
}

void printImage(char *p, int w, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%c", p[i * w + j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    char image[HEIGHT * WIDTH];
    for (int i = 0; i < HEIGHT * WIDTH; i++) {
        image[i] = rand() % 10 + 48;
    }

    printf("Initial State\n");
    printImage(image, WIDTH, HEIGHT);

    printf("After Brighten\n");
    imageBrighten(image, WIDTH, HEIGHT);
    printImage(image, WIDTH, HEIGHT);

    printf("After Darken\n");
    imageDarken(image, WIDTH, HEIGHT);
    imageDarken(image, WIDTH, HEIGHT);
    printImage(image, WIDTH, HEIGHT);
}
*/

