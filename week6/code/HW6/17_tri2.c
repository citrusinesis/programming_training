#include <stdio.h>

int main() {
    int cnt = 0;
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= a; b++) {
            for (int c = 1; c <= a + b; c++) {
                if (c < a || c < b)
                    continue;
                else if (c * c == a * a + b * b) {
                    printf("%d %d %d\n", b, a, c);
                    cnt++;
                }
            }
        }
    }
    printf("피타고라스 수의 개수 = %d\n", cnt);
}