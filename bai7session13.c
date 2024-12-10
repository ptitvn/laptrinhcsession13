#include <stdio.h>

int matrix[100][100]; 
int (*createMatrix(int rows, int cols))[100];
void printMatrix(int matrix[100][100], int rows, int cols);

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot:\n ");
    scanf("%d", &cols);

    int (*matrixPtr)[100] = createMatrix(rows, cols);
    printMatrix(matrixPtr, rows, cols);

    return 0;
}
int (*createMatrix(int rows, int cols))[100] {
    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phần tử [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}
void printMatrix(int matrix[100][100], int rows, int cols) {
    printf("Ma trận:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}