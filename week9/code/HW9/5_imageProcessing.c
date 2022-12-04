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