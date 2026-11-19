#include <stdio.h>

#define MAX 100

int main() {
    int r1, c1, r2, c2;
    int a[MAX][MAX], b[MAX][MAX], prod[MAX][MAX];

    printf("Enter rows and columns of Matrix A: ");
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || r1 > MAX || c1 <= 0 || c1 > MAX) {
        printf("Invalid dimensions for Matrix A.\n");
        return 1;
    }

    printf("Enter rows and columns of Matrix B: ");
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || r2 > MAX || c2 <= 0 || c2 > MAX) {
        printf("Invalid dimensions for Matrix B.\n");
        return 1;
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible: columns of A must equal rows of B.\n");
        return 1;
    }

    printf("\nEnter elements of Matrix A (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of Matrix A and Matrix B (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
