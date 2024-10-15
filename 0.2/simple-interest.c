#include <stdio.h>
int main() {
    int p;
    float t, r, s;
    printf("Enter the amount you have to take loan: ");
    scanf("%d", &p);
    printf("Enter the borrowing time (in years): ");
    scanf("%f", &t);
    printf("Enter the interest on the loan per year: ");
    scanf("%f", &r);
    s = (p * r * t) / 100;
    printf("The simple interest on the loan of %d with interest of %.2f during the duration of %.2f years is: %.2f\n", p, r, t, s);
    return 0;
}

