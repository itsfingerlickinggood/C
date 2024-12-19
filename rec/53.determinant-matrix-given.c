#include <stdio.h>

#define MAX 10

// Function to find the determinant of a matrix
int determinant(int matrix[MAX][MAX], int n) {
    int det = 0;
    int temp[MAX][MAX]; // Temporary matrix for minors

    if (n == 1) {
        return matrix[0][0]; // Determinant of a 1x1 matrix is the single element
    }

    if (n == 2) { // Determinant of a 2x2 matrix
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    for (int col = 0; col < n; col++) {
        int sub_i = 0; // Row index for minor matrix
        for (int i = 1; i < n; i++) {
            int sub_j = 0; // Column index for minor matrix
            for (int j = 0; j < n; j++) {
                if (j == col) continue; // Skip the current column
                temp[sub_i][sub_j] = matrix[i][j];
                sub_j++;
            }
            sub_i++;
        }
        // Add or subtract the determinant of the minor matrix
        det += (col % 2 == 0 ? 1 : -1) * matrix[0][col] * determinant(temp, n - 1);
    }
    return det;
}

int main() {
    int matrix[MAX][MAX], n;

    // Input matrix size
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute determinant
    int det = determinant(matrix, n);
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}

