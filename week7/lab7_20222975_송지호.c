/* 1_ex1.c
#include <stdio.h>

int main() {
    int scores[5];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    for (int i = 0; i < 5; i++)
        printf("scores[%d]=%d\n", i, scores[i]);
}
*/

/* 2_ex2.c
#include <stdio.h>
#define SIZE 26

int main() {
    char codes[SIZE];

    for (int i = 0; i < SIZE; i++)
        codes[i] = 'a' + i;
    for (int i = 0; i < SIZE; i++)
        printf("%c ", codes[i]);
    printf("\n");
}
*/

/* 3_ex3.c
#include <stdio.h>
#define STUDENTS 5

int main() {
    int scores[STUDENTS], sum = 0, average;

    for (int i = 0; i < STUDENTS; i++) {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < STUDENTS; i++)
        sum += scores[i];
    average = sum / STUDENTS;
    printf("성적 평균 = %d\n", average);
}
*/

/* 4_ex4.c
#include <stdio.h>

int main() {
    int scores[] = {31, 63, 62};

    for (int i = 0; i < 5; i++)
        printf("scores[%d] = %d\n", i, scores[i]);
}
*/

/* 5_ex5.c
#include <stdio.h>
#define SIZE 5

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int list[SIZE] = {16, 7, 9, 1, 3}, tmp, counter;

    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");

    for (int k = 0; k < SIZE; k++) {
        counter = 0;
        for (int i = 0; i < SIZE - k - 1; i++) {
            if (list[i] > list[i + 1])
                swap(list + i, list + (i + 1));
            counter++;
        }
        if (!counter) {
            printf("quick!\n");
            break;
        }
    }

    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");
}
*/

/* 6_ex6.c
#include <stdio.h>

int main() {
    int a[3][5] = {
        {0, 1, 2, 3, 4},
        {0, 1, 2, 3, 4},
        {0, 1, 2, 3, 4},
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("a[%d][%d] = %d ", i, j, a[i][j]);
        }
        printf("\n");
    }
}
*/

