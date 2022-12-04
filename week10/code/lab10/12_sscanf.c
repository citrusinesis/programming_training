#include <stdio.h>
#include <stdlib.h>

int main() {
    const char s[] = "100";
    char t[100] = "";
    int i;

    printf("%d \n", atoi("100"));
    sscanf(s, "%d", &i);
    sprintf(t, "%d", 100);
}