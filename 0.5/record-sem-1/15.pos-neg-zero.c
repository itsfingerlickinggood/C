#include<stdio.h>

int main(){
	int a;
	
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if(a==0){
		printf("\n\tThe given number %d is neither positive nor negative !",a);
	}
	else if(a>0){
		printf("\n\tThe given number %d is positive !",a);
	}
	else{
		printf("\n\tThe given number %d is negative !",a);
	}
	
	return 0;
}
