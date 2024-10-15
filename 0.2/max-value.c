#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	c=(a+b+abs(a-b))/2;
	printf("The max value is %d",c);
	return 0;
}
