#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number to find the sum of digits : ");
	scanf("%d",&a);
	
	b=a;
	
	int i,j=0;
	
	while(a>0){
		i=a%10;
		j+=i;
		a/=10;
	}
	
	printf("\n\tThe sum of the digit %d is %d",b,j);
	
	return 0;
}
