#include <stdio.h>
int main() {
    int n, i, target, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to find its first occurrence: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("The first occurrence of %d is at index %d.\n", target, i);
            break;
        }
    }

    if (i==n) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

