#include <stdio.h>

int main() {
    int i,n, matrix[100][100], symmetric = 1,j;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i < j && matrix[i][j] != matrix[j][i])
                symmetric = 0;
        }

    printf(symmetric ? "Symmetric\n" : "Not Symmetric\n");
    return 0;
}

