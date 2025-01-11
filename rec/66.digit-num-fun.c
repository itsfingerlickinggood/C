#include<stdio.h>

int digits_sum(int num){
	int i,sum=0;
	while(num>0){
		sum+=num%10;
		num/=10;
	}
	return sum;
}

int main(){
	
	int a;
	
	printf("Enter the number to find the sum of its digits : ");
	scanf("%d",&a);
	
	printf("The sum of digits of %d is %d",a,digits_sum(a));
	
	return 0;
}
