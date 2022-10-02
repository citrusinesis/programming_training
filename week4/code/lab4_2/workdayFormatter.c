#include <stdio.h>
#define DFY 365
#define DFW 7

int main() {
    int input;
    printf("총 일수를 입력하시오: ");
    scanf("%d", &input);

    printf("%d년 %d주 %d일\n", input / DFY, input % DFY / DFW,
           input % DFY % DFW);
}