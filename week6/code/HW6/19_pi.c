#include <stdio.h>

int main() {
    int input;
    double pi = 0;

    printf("반복횟수: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        if (i % 2)
            pi += 4.0 / (2.0 * (double)i - 1);
        else
            pi -= 4.0 / (2.0 * (double)i - 1);
    }

    printf("Pi = %lf\n", pi);
}