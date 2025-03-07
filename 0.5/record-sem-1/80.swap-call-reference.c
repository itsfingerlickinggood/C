#include<stdio.h>

int swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	return *a,*b;
}

int main(){
	
	int num1,num2;
	
	printf("Enter the two numbers to be swapped : ");
	scanf("%d%d",&num1,&num2);
	
	printf("The intial variables are a=%d and b=%d",num1,num2);
	
	swap(&num1,&num2);
	
	printf("\nThe swapped variables are a=%d and b=%d",num1,num2);
	
	return 0;
}
