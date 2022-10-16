#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int niter, insideDots = 0;
    double x, y, z, pi;
    printf("반복횟수: ");
    scanf("%d", &niter);
    insideDots = 0;
    for (int i = 0; i < niter; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        z = x * x + y * y;
        if (z <= 1)
            insideDots++;
    }
    pi = (double)insideDots / niter * 4;
    printf("π = %lf\n상대오차 = %lf%%\n", pi, fabs((pi - M_PI) / pi * 100));
}