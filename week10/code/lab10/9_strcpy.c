#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dst[6];

    strcpy(dst, src);
    printf("복사된 문자열 = %s \n", dst);
}