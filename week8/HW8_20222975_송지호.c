/* 1_func.c
#include <stdio.h>

double eval(double x, double y) { return 1.5 * x + 3.0 * y; }

int main() {
    double x, y;
    while (1) {
        printf("x=");
        scanf("%lf", &x);
        printf("y=");
        scanf("%lf", &y);

        printf("f(x,y)=%lf\n", eval(x, y));
    }
}
*/

/* 2_getBigger.c
#include <stdio.h>

double getBigger(double x, double y) { return x > y ? x : y; }

int main() {
    double x, y;
    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    printf("실수를 입력하시오: ");
    scanf("%lf", &y);

    printf("더 큰수는 %lf입니다.\n", getBigger(x, y));
}
*/

/* 3_drawStars.c
#include <stdio.h>

void drawStars() { printf("********************************\n"); }

int main() {
    drawStars();
    printf("Hello, World!\n");
    drawStars();
}
*/

/* 4_getDivisor.c
#include <stdio.h>

void getDivisor(int x) {
    printf("%d의 약수: ", x);
    for (int i = 1; i <= x; i++) {
        if (!(x % i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() { getDivisor(8); }
*/

/* 5_checkPrime.c
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
    for (int i = 2; i <= 100; i++) {
        if (checkPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}
*/

/* 6_power.c
#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d ", power(3, i));
    }
    printf("\n");
}
*/

/* 7_dist.c
#include <math.h>
#include <stdio.h>

double dist_2d() {
    double x1, x2, y1, y2;
    printf("첫번째 점의 좌표를 입력하시오:(x, y) ");
    scanf("%lf %lf", &x1, &y1);
    printf("두번째 점의 좌표를 입력하시오:(x, y) ");
    scanf("%lf %lf", &x2, &y2);

    return sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}

int main() { printf("두점 사이의 거리는 %lf입니다.\n", dist_2d()); }
*/

/* 8_quadEqn.c
#include <math.h>
#include <stdio.h>

void quadEqn(double a, double b, double c) {
    if (pow(b, 2) - 4 * a * c < 0) {
        printf("근이 없습니다.\n");
    }

    printf("첫 번째 근=%lf\n", (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a);
    printf("두 번째 근=%lf\n", (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a);
}

int main() {
    double a, b, c;
    printf("2차 방정식의 계수를 입력하시오:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    quadEqn(a, b, c);
}
*/

/* 9_filpcoin.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int filp() { return rand() % 2; }

int main() {
    srand(time(NULL));

    int input, cnt = 0;
    while (1) {
        printf("앞(0) 또는 뒤(1)을 선택하시오(종료는 -1): ");
        scanf("%d", &input);

        if (input == -1) {
            printf("당신이 이긴 횟수는 %d번 입니다.\n", cnt);
            exit(0);
        } else if (input != 0 && input != 1) {
            printf("잘못된 입력값입니다.\n");
            continue;
        } else if (input == filp()) {
            printf("당신이 이겼습니다.\n");
            cnt++;
        } else {
            printf("컴퓨터가 이겼습니다.\n");
        }
    }
}
*/

/* 10_dice.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll() { return rand() % 6 + 1; }

int sum() {
    int tmp, total = 0;

    printf("(");
    for (int i = 0; i < 3; i++) {
        tmp = roll();
        printf("%d", tmp);
        if (i != 2) {
            printf(", ");
        }
        total += tmp;
    }
    printf(")");

    return total;
}

int main() {
    srand(time(NULL));
    int user, com;

    printf("사용자 주사위=");
    user = sum();
    printf("=%d\n", user);

    printf("컴퓨터 주사위=");
    com = sum();
    printf("=%d\n", com);

    if (user > com)
        printf("사용자 승리\n");
    else
        printf("컴퓨터 승리\n");
}
*/

/* 11_calc-global.c
#include <stdio.h>
#include <stdlib.h>

int cnt[4] = {0};

int calc() {
    int x, y;
    char op;
    scanf("%d %c %d", &x, &op, &y);

    switch (op) {
    case '+':
        printf("덧셈은 총 %d번 호출되었습니다.\n", ++cnt[0]);
        return x + y;
        break;

    case '-':
        printf("뺄셈은 총 %d번 호출되었습니다.\n", ++cnt[1]);
        return x - y;
        break;

    case '*':
        printf("곱셈은 총 %d번 호출되었습니다.\n", ++cnt[2]);
        return x * y;
        break;

    case '/':
        printf("나눗셈은 총 %d번 호출되었습니다.\n", ++cnt[3]);
        return x / y;
        break;

    default:
        printf("Invalid Operation\n");
        exit(-1);
        break;
    }
}

int main() {
    while (1) {
        printf("연산을 입력하시오(종료는 Ctrl-Z): ");
        printf("연산 결과: %d\n", calc());
    }
}
*/

/* 11_calc-static.c
#include <stdio.h>
#include <stdlib.h>

int calc() {
    static int cnt[4] = {0};
    int x, y;
    char op;
    scanf("%d %c %d", &x, &op, &y);

    switch (op) {
    case '+':
        printf("덧셈은 총 %d번 호출되었습니다.\n", ++cnt[0]);
        return x + y;
        break;

    case '-':
        printf("뺄셈은 총 %d번 호출되었습니다.\n", ++cnt[1]);
        return x - y;
        break;

    case '*':
        printf("곱셈은 총 %d번 호출되었습니다.\n", ++cnt[2]);
        return x * y;
        break;

    case '/':
        printf("나눗셈은 총 %d번 호출되었습니다.\n", ++cnt[3]);
        return x / y;
        break;

    default:
        printf("Invalid Operation\n");
        exit(-1);
        break;
    }
}

int main() {
    while (1) {
        printf("연산을 입력하시오(종료는 Ctrl-Z): ");
        printf("연산 결과: %d\n", calc());
    }
}
*/

/* 12_bank-static.c
#include <stdio.h>

int save(int amount) {
    static int balance = 0;
    balance += amount;
    return balance;
}

int main() {
    int input;
    while (1) {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%d", &input);
        if (input < -1) {
            printf("잘못된 입력값 입니다.\n");
            continue;
        } else if (input == -1) {
            break;
        } else {
            printf("지금까지의 저축액은 %d원 입니다.\n", save(input));
        }
    }
}

// (c) 전역변수를 이용해야 두 함수 모두 계좌에 접근 가능.
*/

/* 12_bank-global.c
#include <stdio.h>

int balance = 0;

void save(int amount) { balance += amount; }

int main() {
    int input;
    while (1) {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%d", &input);
        if (input < -1) {
            printf("잘못된 입력값 입니다.\n");
            continue;
        } else if (input == -1) {
            break;
        } else {
            save(input);
        }
        printf("지금까지의 저축액은 %d원 입니다.\n", balance);
    }
}
*/

/* 13_showDigit.c
#include <stdio.h>

int showDigit(int x) {
    if ((x / 10) > 0) {
        showDigit(x / 10);
    }
    printf("%d ", x % 10);
}

int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);
    showDigit(input);
    printf("\n");
}
*/

/* 14_cubeSum.c
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
*/

