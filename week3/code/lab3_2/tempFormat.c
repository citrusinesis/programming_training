#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("화씨 온도 = ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("섭씨 온도 = %lf\n", celsius);
}