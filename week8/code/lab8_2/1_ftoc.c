#include <stdio.h>

double FtoC(double f) { return (5.0 * (f - 32.0)) / 9.0; }

int main() {
    double c, f;
    f = 32.0;
    c = FtoC(f);
    printf("화씨온도 %lf은 섭씨온도 %lf에 해당한다. \n", f, c);
    return 0;
}
