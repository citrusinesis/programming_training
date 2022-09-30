#include <stdio.h>

int main() {
    int a = 100, b = 200, tmp;
    printf("Before Swap:\ta=%d, b=%d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;
    printf("After Swap:\ta=%d, b=%d\n", a, b);
}