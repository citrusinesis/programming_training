#include <stdio.h>
#include <string.h>

int main() {
    char s[11] = "Hello";

    strcat(s, "World");
    printf("%s \n", s);
}