#include <stdio.h>

int main() {
    int number = 10;
    int *p;
    p = &number;
    printf("변수 number의 주소 = %p\n", &number);
    printf("포인터의 값 = %p\n", p);
    printf("변수 number의 값 = %d\n", number);
    printf("포인터가 가리키는 값 = %d\n", *p);
}