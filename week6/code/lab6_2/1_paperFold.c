#include <stdio.h>

int main() {
    double pheight = 0.001;
    const double everest = 8800.0;
    int count = 0;

    while (pheight < everest) {
        pheight *= 2.0;
        count++;
    }
    printf("종이 접는 횟수 = %d\n", count);
}