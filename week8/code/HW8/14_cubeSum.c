#include <math.h>
#include <stdio.h>

int cube(int count) {
    if (!count)
        return count;
    else
        return cube(count - 1) + (int)pow(count, 3);
}

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);
    printf("%d\n", cube(input));
}