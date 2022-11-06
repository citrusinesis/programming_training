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