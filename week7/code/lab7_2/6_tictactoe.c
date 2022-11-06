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