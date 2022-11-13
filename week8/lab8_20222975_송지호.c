/* 1_getInt.c
#include <stdio.h>

int getInteger() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int main() {
    printf("두수의 합 = %d\n", getInteger() + getInteger());
    return 0;
}
*/

/* 2_getMax.c
#include <stdio.h>

int getInteger() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int getMax(int x, int y) { return x > y ? x : y; }

int main() {
    printf("두수의 합 = %d\n", getMax(getInteger(), getInteger()));
    return 0;
}
*/

/* 3_getPower.c
#include <stdio.h>

int getInteger() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main() {
    int x = getInteger(), y = getInteger();
    printf("%d의 %d승 = %d\n", x, y, power(x, y));
    return 0;
}
*/

/* 4_static.c
#include <stdio.h>

void sub() {
    int autoCount = 0;
    static int staticCount = 0;

    autoCount++;
    staticCount++;
    printf("autoCount = %d\n", autoCount);
    printf("staticCount = %d\n", staticCount);
}

int main() {
    sub();
    sub();
    sub();
}
*/

/* 5_factorial.c
#include <stdio.h>

int factorial(int n) {
    printf("factorial(%d)\n", n);
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void) {
    int x = 0, result;
    printf("정수를 입력하시오:");
    scanf("%d", &x);

    result = factorial(x);
    printf("%d!은 %d입니다.\n", x, result);
    return 0;
}
*/

