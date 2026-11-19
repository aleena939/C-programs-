#include <stdio.h>

#define MAX 100

int main() {
    int rows, cols;
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];

    printf("Enter number of rows (1 to %d): ", MAX);
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > MAX) {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter number of columns (1 to %d): ", MAX);
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > MAX) {
        printf("Invalid number of columns.\n");
        return 1;
    }

    printf("\nEnter elements of Matrix A (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of Matrix A and Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
