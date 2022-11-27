#include <stdio.h>

void modify(int value) { value = 99; }

void modifyCbr(int *ptr) { *ptr = 99; }

int main() {
    int number = 1;
    modifyCbr(&number);
    printf("number = %d\n", number);
}