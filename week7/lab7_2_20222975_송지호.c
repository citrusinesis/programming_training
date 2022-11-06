/* 1_attendence.c
#include <stdio.h>
#define SIZE 16

int main() {
    int attend[SIZE] = {0}, count = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i + 1);
        scanf("%d", &attend[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if (!attend[i]) {
            count++;
        }
    }

    double ratio = count / 16.0;
    if (ratio < 3.0)
        printf("수업 일수 부족입니다(%f%%). \n", 100.0 - ratio * 100.0);
}
*/

/* 2_cheapest.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    srand(time(NULL));
    int prices[SIZE] = {0}, min;

    printf("[ ");
    for (int i = 0; i < SIZE; i++) {
        prices[i] = rand() % 1000;
        printf("%d ", prices[i]);
    }
    printf("]\n");

    min = prices[0];
    for (int i = 1; i < SIZE; i++) {
        if (prices[i] < min)
            min = prices[i];
    }

    printf("최솟값은 %d입니다.\n", min);
}
*/

/* 3_search.c
#include <stdio.h>
#define SIZE 10

int main() {
    int target, table[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("[ ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", table[i]);
    }
    printf("]\n");

    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &target);

    for (int i = 0; i < SIZE; i++) {
        if (target == table[i]) {
            printf("탐색 성공 인덱스 = %d\n", i);
            break;
        }
    }
}
*/

/* 4_bubble.c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void visualize(int length) {
    for (int i = 0; i < length; i++)
        printf("*");
    printf("\n");
}

int main() {
    int list[SIZE] = {6, 7, 2, 4, 3, 9, 14, 5, 11, 10};

    for (int i = 0; i < SIZE; i++) {
        system("clear");
        printf("[*]Step %d\n", i + 1);
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (list[j] > list[j + 1])
                swap(list + j, list + j + 1);
        }

        for (int j = 0; j < SIZE; j++) {
            visualize(list[j]);
        }
        getchar();
    }
}
*/

/* 5_matadder.c
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    int A[ROWS][COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    int B[ROWS][COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    int C[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
*/

/* 6_tictactoe.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void visualize(char board[][3]) {
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("---|---|---\n");
}

int validateWinner(char board[][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;
    }

    for (int i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;
    }

    if (board[0][0] != ' ' && board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[2][0] != ' ' && board[2][0] == board[1][1] &&
        board[1][1] == board[0][2])
        return 1;

    return 0;
}

void winningPage(char *winner, char board[][3]) {
    system("clear");
    printf("[*]%s Win!\n", winner);
    visualize(board);
    getchar();
    exit(0);
}

int main() {
    srand(time(NULL));
    int input[2] = {0}, turn = 0;

    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},
    };

    while (1) {
        system("clear");

        if (turn++ % 2) {
            printf("[*]Coumputer's Turn!\n");
            board[rand() % 3][rand() % 3] = 'X';
            visualize(board);

            if (validateWinner(board))
                winningPage("Computer", board);
        } else {
            printf("[*]Your Turn!\n");
            visualize(board);
            printf("(x, y): ");
            scanf("%d %d", &input[0], &input[1]);

            if ((input[0] < 3 && input[0] > -1) ||
                (input[1] < 3 && input[1] > -1)) {
                board[input[0]][input[1]] = 'O';
            } else {
                printf("[*]Invalid Input\n");
            }

            if (validateWinner(board))
                winningPage("You", board);
        }

        getchar();
    }
}
*/

