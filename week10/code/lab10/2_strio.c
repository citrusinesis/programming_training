#include <stdio.h>

int main() {
    char str[] = "komputer";

    printf("%s\n", str);
    str[0] = 'c';
    printf("%s\n", str);
}