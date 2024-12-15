#include <stdio.h>

int main() {
    int n, i, j, k, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (k = 1; k <= n - i; k++) {
            printf("  ");
        }

        coef = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", coef);

            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

