/* 1_ftoc.c
#include <stdio.h>

double FtoC(double f) { return (5.0 * (f - 32.0)) / 9.0; }

int main() {
    double c, f;
    f = 32.0;
    c = FtoC(f);
    printf("화씨온도 %lf은 섭씨온도 %lf에 해당한다. \n", f, c);
    return 0;
}
*/

/* 2_prime.c
#include <stdio.h>

int checkPrime(int n) {
    int isPrime = 1;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);
    if (checkPrime(input) == 1)
        printf("소수입니다. \n");
    else
        printf("소수가 아닙니다. \n");
    return 0;
}
*/

/* 3_primesum.c
#include <stdio.h>

int checkPrime(int n) {
    int isPrime = 1;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main() {
    int n, flag = 0;
    printf("양의 정수를 입력하시오: ");
    scanf_s("%d", &n);
    for (int i = 2; i < n; i++) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", n);
    return 0;
}
*/

/* 4_fibbonacci.c
#include <stdio.h>

int fibbonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibbonacci(i));
    }
}
*/

/* 5_lotto.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

int main() {
    int i, k, lotto[6] = {0};
    int dupCheck[MAX + 1] = {0};

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        k = 1 + (rand() % MAX);
        while (dupCheck[k] == 1)
            k = 1 + (rand() % MAX);
        lotto[i] = k;
        dupCheck[k] = 1;
        printf("%d ", lotto[i]);
    }
    return 0;
}
*/

/* 6_tailor.c
#include <stdio.h>
#include <stdlib.h>

double factorial(int n) {
    double result = 1.0;
    if (n <= 1)
        return 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

double power(int x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main(void) {
    double sum = 0.0;
    int x, n;
    printf("x와 n의 값을 입력하시오: ");
    scanf("%d %d", &x, &n);
    for (int i = 0; i <= n; i++)
        sum += power(x, i) / factorial(i);
    printf("e^%d = %.3lf\n", x, sum);
    return 0;
}
*/

/* 7_atm.c
#include <stdio.h>
#include <stdlib.h>

int balance = 0;
typedef void (*Action)();

int transaction(Action action) {
    int temp = balance, ret = 0;
    action();

    if (balance < 0) {
        printf("잔고 이상으로 인출할 수 없습니다.\n");
        balance = temp;
        ret = -1;
    }

    printf("새로운 잔고는 %d원 입니다.\n\n", balance);

    return ret;
}

void checkBalance() { printf("현재 잔고는 %d원 입니다.\n\n", balance); }

void deposit() {
    int amount;
    printf("[*] 입금 금액을 입력하시오. \n");
    scanf("%d", &amount);
    balance += amount;
}

void witdrawal() {
    int amount;
    printf("[*] 출금 금액을 입력하시오. \n");
    scanf("%d", &amount);
    balance -= amount;
}

void menu() {
    printf("****하나를 선택하시오****\n");
    printf("<1> 잔고 확인\n");
    printf("<2> 입금\n");
    printf("<3> 인출\n");
    printf("<4> 종료\n");
}

void menuSelect(int menuValue) {
    switch (menuValue) {
    case 1:
        checkBalance();
        break;

    case 2:
        transaction(deposit);
        break;

    case 3:
        transaction(witdrawal);
        break;

    case 4:
        exit(0);
        break;

    default:
        printf("잘못된 메뉴입니다. 다시 입력하세요.\n");
        break;
    }
}

int main() {
    int menuValue;
    printf("********Welcome to ATM********\n");

    while (1) {
        menu();
        scanf("%d", &menuValue);
        menuSelect(menuValue);
    }
}
*/

