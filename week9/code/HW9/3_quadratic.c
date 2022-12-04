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
