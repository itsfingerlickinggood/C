#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the number to check the sum of first and last digits sum: ");
	scanf("%d",&a);
	 b=a%10;
	 while(a>=10){
	 	a=a/10;
	 }
	 c=a;
	d=c+b;
	printf("The sum of %d and %d is %d",c,b,d);
	return 0;
}
