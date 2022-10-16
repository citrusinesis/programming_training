#include <stdio.h>

int main() {
    int i, n;
    double sum = 0.0;
    printf("항의 개수: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += 1.0 / (double)i;
    printf("수열의 합=%lf \n\n", sum);
}