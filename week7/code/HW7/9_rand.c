#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int table[10] = {0};

    for (int i = 0; i < 100; i++)
        table[rand() % 10]++;

    int max = 0, idx = 0;
    for (int i = 0; i < 10; i++) {
        if (max < table[i]) {
            max = table[i];
            idx = i;
        }
    }

    printf("가장 많이 생성된 수=%d\n", idx);
}