#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void read_matrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);
void print_matrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);
void transpose_matrix(int matrix[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols);

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int transposed[MAX_COLS][MAX_ROWS];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid dimensions. Rows and columns must be positive and within limits.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    read_matrix(matrix, rows, cols);

    transpose_matrix(matrix, transposed, rows, cols);

    printf("Original matrix:\n");
    print_matrix(matrix, rows, cols);

    printf("Transposed matrix:\n");
    print_matrix(transposed, cols, rows);

    return 0;
}

void read_matrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose_matrix(int matrix[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}
