#include <stdio.h>

int main() {
    int a, b, sum, difference, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    difference = a - b;
    product = a * b;
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    
    return 0;
}

