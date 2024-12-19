#include <stdio.h>

int main() {
    int matrix[10][10], n, isSame = 1,i,j;

    // Input matrix size
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if upper triangular is same as lower triangular
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSame = 0;
                break;
            }
        }
    }

    // Output result
    if (isSame)
        printf("Upper triangular is the same as lower triangular.\n");
    else
        printf("Upper triangular is NOT the same as lower triangular.\n");

    return 0;
}

