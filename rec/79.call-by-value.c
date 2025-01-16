#include<stdio.h>

int add(int x){
	return x=x+10;
}

int main(){
	
	int num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	printf("\nThe value of x->%d (before function calling)",num);
	
	num=add(num);
	
	printf("\nThe value of x->%d (after function calling)",num);
	
	return 0;
}
