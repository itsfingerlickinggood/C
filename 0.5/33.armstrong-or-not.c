#include<stdio.h>
#include<math.h>

int main() {
    char ans;
    do {
        int a, sum = 0, digits = 0, original;
        printf("Enter a number: ");
        scanf("%d", &a);

        for (original = a; a > 0; a /= 10, digits++);
        for (a = original; a > 0; sum += pow(a % 10, digits), a /= 10);

        printf("%d is %sARMSTRONG!\n", original, (sum == original) ? "" : "NOT ");
        printf("Continue? (y/n): ");
        scanf(" %c", &ans);
    } while (ans == 'y');
    return 0;
}

