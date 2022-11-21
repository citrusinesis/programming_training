#include <stdio.h>

double eval(double x, double y) { return 1.5 * x + 3.0 * y; }

int main() {
    double x, y;
    while (1) {
        printf("x=");
        scanf("%lf", &x);
        printf("y=");
        scanf("%lf", &y);

        printf("f(x,y)=%lf\n", eval(x, y));
    }
}