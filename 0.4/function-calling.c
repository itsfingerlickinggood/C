#include <stdio.h>

int a(int x);
void b();

int main() {
    a(10); 
    b();  
    return 0;
}

int a(int x) {
    printf("%d\n", x);
    return 0;
}

void b() {
    printf("b\n");
}

