#include <stdio.h>

int main() {
    double score[3][3] = {
        {30, 10, 11},
        {40, 90, 32},
        {70, 65, 56},
    };

    for (int i = 0; i < 3; i++)
        printf("학생 %d 점수 평균: %lf\n", i,
               (score[i][0] + score[i][1] + score[i][2]) / 3.0);
}