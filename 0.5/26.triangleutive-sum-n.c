#include<stdio.h>
int main(){
	int a;
	printf("Enter the number upto which to find the Triangular Number Sequence's Cumulative Sum : ");
	scanf("%d",&a);
	
	int i=0,sum=0;
	while(i<=a){
		sum+=(i*(i+1))/2;
		i++;
	}
	
	printf("The SUM is : %d",sum);
	
	return 0;
}
