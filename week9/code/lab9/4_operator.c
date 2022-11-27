#include <stdio.h>

int main() {
    int number = 10;
    int *p;
    int v = 0;

    p = &number;

    printf("number = %u\n", number);
    printf("변수 number의 주소 = %u\n", &number);
    printf("p = %u\n", p);

    // v = *p++;
    // v = (*p)++;
    // v = *++p;
    v = ++*p;
    printf("v = %u\n", v);
    printf("p = %u\n", p);
    printf("number = %u\n", number);
}