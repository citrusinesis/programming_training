/* 1_pointer.c
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
*/

/* 2_pointer2.c
#include <stdio.h>

int main() {
    int number = 10;
    int *p;

    p = &number;
    printf("변수 number의 값 = %d\n", number);

    *p = 20;
    printf("변수 number의 값 = %d\n", number);
}
*/

/* 3_increase.c
#include <stdio.h>

int main() {
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    pc++;
    pi++;
    pd++;

    printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, pd + 2);
}
*/

/* 4_operator.c
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
*/

/* 5_callby.c
#include <stdio.h>

void modify(int value) { value = 99; }

void modifyCbr(int *ptr) { *ptr = 99; }

int main() {
    int number = 1;
    modifyCbr(&number);
    printf("number = %d\n", number);
}
*/

/* 6_swap.c
#include <stdio.h>

void swap(int x, int y) {
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

void swapCbr(int *px, int *py) {
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main() {
    int a = 10, b = 20;
    swapCbr(&a, &b);
    printf("swap() 호출후 a = %d b = %d\n", a, b);
}
*/

/* 7_arr.c
#include <stdio.h>

void sub(int *ptr) { printf("%d \n", ptr[10]); }

int main() {
    int large_data[] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                        11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sub(large_data);
}
*/

