#include<stdio.h>

int sum_digits(int a){
    if(a==0){
        return 0;
    } 
	else{
    	return (a%10)+sum_digits(a/10);
    }
}

int main(){
    int a;
    
    printf("Enter the number to find the sum of digits : ");
    scanf("%d", &a);
	
	printf("The sum of digits of %d is %d",a,sum_digits(a));
	
    return 0;
}

