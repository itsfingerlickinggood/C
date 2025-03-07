#include<stdio.h>

int factorial(int a){
	int i,sum=1;
	for(i=1;i<=a;i++){
		sum*=i;
	}
	return sum;
}

int main(){
	int num;
	
	printf("Enter the number to find the factorial : ");
	scanf("%d",&num);
	
	printf("The factorial of %d is %d",num,factorial(num));
	
	return 0;
}
