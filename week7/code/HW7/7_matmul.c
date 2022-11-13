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