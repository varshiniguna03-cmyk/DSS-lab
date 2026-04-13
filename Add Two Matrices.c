#include <stdio.h>

int main() {
    int r, c, i, j;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], sum[r][c];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
