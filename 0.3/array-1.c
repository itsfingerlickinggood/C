#include <stdio.h>

int main() {
    int i;
    int a[10];

    for (i = 0; i < 10; i++) {
        a[i] = i + 100;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

