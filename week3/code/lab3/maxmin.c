#include <float.h>
#include <stdio.h>

int main() {
    printf("float min: %f\nfloat max: %f\n", FLT_MIN, FLT_MAX);
    printf("double min: %lf\ndouble max: %lf\n", DBL_MIN, DBL_MAX);
    printf("long double min: %Lf\nlong double max: %Lf\n", LDBL_MIN, LDBL_MAX);
}