#include <math.h>
#include <stdio.h>

int main() {
    double table[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("실수를 입력하시오: ");
        scanf("%lf", &table[i]);
    }

    double mean = 0;
    for (int i = 0; i < 5; i++) {
        mean += table[i];
    }
    mean /= 5.0;

    double var = 0;
    for (int i = 0; i < 5; i++) {
        var += (table[i] - mean) * (table[i] - mean);
    }
    var /= 5.0;

    printf("평균:%lf\n표준편차:%lf\n", mean, sqrt(var));
}