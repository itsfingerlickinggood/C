#include<stdio.h>

int sum_n(int n){
	if(n==0){
		return 0;
	}
	else{
		return n+sum_n(n-1);
	}
}

int main(){
	
	int a;
	
	printf("Enter the num to find the sum from 1->N : ");
	scanf("%d",&a);
	
	printf("The sum of 1->%d numbers are : %d",a,sum_n(a));
	
	return 0;
}
