#include<stdio.h>
int main(){
	int a,i;
	printf("Enter the number find the sum of factorials of the first n positive integers :");
	scanf("%d",&a);
	
	int factorial=1;
	int sum=0;
	
	for(i=1;i<=a;i++){
		factorial*=i;
		sum+=factorial;
	}
	
	printf("The sum of factorial of %d numbers are %d",a,sum);
	
	return 0;
}
