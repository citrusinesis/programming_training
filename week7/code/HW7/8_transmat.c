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