/* 1_days.c
#include <stdio.h>

int main() {
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < sizeof(days) / sizeof(int); i++)
        printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
}
*/

/* 2_reverse.c
#include <stdio.h>

int main() {
    int size;
    printf("입력할 정수의 개수: ");
    scanf("%d", &size);

    int arr[size], input;
    for (int i = 0; i < size; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &input);
        arr[i] = input;
    }

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/

/* 3_sum.c
#include <stdio.h>

int main() {
    int size;
    printf("입력할 정수의 개수: ");
    scanf("%d", &size);

    int arr[size], input;
    for (int i = 0; i < size; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &input);
        arr[i] = input;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("합 = %d\n", sum);
}
*/

/* 4_minmax.c
#include <stdio.h>

int main() {
    int size;
    printf("입력할 정수의 개수: ");
    scanf("%d", &size);

    int arr[size], input;
    for (int i = 0; i < size; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &input);
        arr[i] = input;
    }

    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("최댓값 = %d, 최솟값 = %d\n", max, min);
}
*/

/* 5_exam.c
#include <stdio.h>

int main() {
    double score[3][3] = {
        {30, 10, 11},
        {40, 90, 32},
        {70, 65, 56},
    };

    for (int i = 0; i < 3; i++)
        printf("학생 %d 점수 평균: %lf\n", i,
               (score[i][0] + score[i][1] + score[i][2]) / 3.0);
}
*/

/* 6_mul.c
#include <stdio.h>

int main() {
    int table[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
        {3, 6, 9, 12, 15, 18, 21, 24, 27, 30},
        {4, 8, 12, 16, 20, 24, 28, 32, 36, 40},
        {5, 10, 15, 20, 25, 30, 35, 40, 45, 50},
        {6, 12, 18, 24, 30, 36, 42, 48, 54, 60},
        {7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
        {8, 16, 24, 32, 40, 48, 56, 64, 72, 80},
        {9, 18, 27, 36, 45, 54, 63, 72, 81, 90},
        {10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
    };

    int x, y;
    printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
    scanf("%d %d", &x, &y);

    printf("%dX%d=%d\n", x, y, table[x - 1][y - 1]);
}
*/

/* 7_matmul.c
#include <stdio.h>

int row = 0, column = 0;

void getMatirx(int mat[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void mulMatrix(int result[row][column], int mat1[row][column],
               int mat2[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = 0;
            for (int k = 0; k < column; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

void printMatrix(int mat[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("행 개수=");
    scanf("%d", &row);
    printf("열 개수=");
    scanf("%d", &column);

    printf("첫 번째 행렬 입력=\n");
    int mat1[row][column];
    getMatirx(mat1);

    printf("두 번째 행렬 입력=\n");
    int mat2[row][column];
    getMatirx(mat2);

    int result[row][column];
    mulMatrix(result, mat1, mat2);
    printf("\n");
    printMatrix(result);
}
*/

/* 8_transmat.c
#include <stdio.h>

int row = 0, column = 0;

void getMatirx(int mat[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void transform(int result[column][row], int mat[row][column]) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            result[i][j] = mat[j][i];
        }
    }
}

int main() {
    printf("행 개수=");
    scanf("%d", &row);
    printf("열 개수=");
    scanf("%d", &column);

    printf("행렬 입력=\n");
    int mat[row][column];
    getMatirx(mat);

    int result[row][column];
    transform(result, mat);
    printf("\n");
    printMatrix(result);
}
*/

/* 9_rand.c
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
*/

/* 10_dice.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int dice[6] = {0};
    for (int i = 0; i < 60000; i++) {
        dice[rand() % 6]++;
    }

    printf("==================\n");
    printf("주사위면    빈도\n");
    printf("==================\n");

    for (int i = 0; i < 6; i++) {
        printf("%d  %d\n", i + 1, dice[i]);
    }
}
*/

/* 11_frequency.c
#include <stdio.h>

int main() {
    int table[1000000] = {0};
    int input;
    printf("입력할 정수의 개수(100개 이내로): ");
    scanf("%d", &input);

    int a;
    for (int i = 0; i < input; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &a);
        table[a]++;
    }

    int cnt = 0;
    for (int i = 0; i < 1000000; i++) {
        if (!table[i])
            continue;
        printf("%d 값은 %d번 등장\n", i, table[i]);
    }
}
*/

/* 12_delete.c
#include <stdio.h>

int main() {
    int length;
    printf("입력할 정수의 개수(100개 이내로): ");
    scanf("%d", &length);

    int table[100000] = {0};

    for (int i = 0; i < length; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &table[i]);
    }

    int pos = 0;
    printf("삭제할 위치: ");
    scanf("%d", &pos);

    int tmp;
    for (int i = pos; i < length - 1; i++) {
        table[i] = table[i + 1];
    }
    table[length] = 0;

    printf("새로운 배열: ");
    for (int i = 0; i < length - 1; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");
}
*/

/* 13_reservation.c
#include <stdio.h>
#include <stdlib.h>

void showReservation(int table[10]) {
    printf("-------------------------------------\n");
    printf("\t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n\t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");
}

int main() {
    int table[10] = {0};

    while (1) {
        char toRes;
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        getchar();
        scanf("%c", &toRes);

        if (toRes == 'n')
            exit(0);

        int pos;
        printf("몇번째 좌석을 예약하시겠습니까? ");
        scanf("%d", &pos);

        if (table[pos] == 1)
            printf("이미 예약된 좌석입니다.\n");
        else {
            table[pos] = 1;
            printf("예약되었습니다.\n");
        }

        showReservation(table);
    }
}
*/

/* 14_statics.c
#include <math.h>
#include <stdio.h>

int main() {
    double table[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("실수를 입력하시오: ");
        scanf("%lf", &table[i]);
    }

    double mean = 0;
    for (int i = 0; i < 5; i++) {
        mean += table[i];
    }
    mean /= 5.0;

    double var = 0;
    for (int i = 0; i < 5; i++) {
        var += (table[i] - mean) * (table[i] - mean);
    }
    var /= 5.0;

    printf("평균:%lf\n표준편차:%lf\n", mean, sqrt(var));
}
*/

/* 15_randomWalk.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printPath(char path[10]) {
    for (int i = 0; i < 10; i++)
        printf("%c", path[i]);
    printf("\n");
}

int main() {
    srand(time(NULL));
    int direction = 0, pos = rand() % 10;

    char path[10];
    for (int i = 0; i < 10; i++) {
        path[i] = '_';
    }
    path[pos] = '*';

    while (1) {
        if (rand() % 2) {
            if (pos != 9) {
                path[pos++] = '_';
                path[pos] = '*';
            }
        } else {
            if (pos != 0) {
                path[pos--] = '_';
                path[pos] = '*';
            }
        }

        printPath(path);
        getchar();
    }
}
*/

