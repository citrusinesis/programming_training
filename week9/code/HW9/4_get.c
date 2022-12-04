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
