#include<stdio.h>
int n_one(int n){
    if(n == 0){
        return 0;
    } else {
    	printf("%d ", n);
        n_one(n - 1);
    }
    return 0;
}

int main(){
    int a;
    printf("Enter upto which N->1 is to be printed : ");
    scanf("%d", &a);
    n_one(a);
    return 0;
}

