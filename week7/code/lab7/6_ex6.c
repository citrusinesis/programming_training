#include <stdio.h>

int main() {
    int a[3][5] = {
        {0, 1, 2, 3, 4},
        {0, 1, 2, 3, 4},
        {0, 1, 2, 3, 4},
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("a[%d][%d] = %d ", i, j, a[i][j]);
        }
        printf("\n");
    }
}