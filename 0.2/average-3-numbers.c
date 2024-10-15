#include <stdio.h>
int main(){
	int a,b,c,x;
	printf("Enter the first no: ");
	scanf("%d",&a);
	printf("Enter the second no: ");
	scanf("%d",&b);
	printf("Enter the third no: ");
	scanf("%d",&c);
	x=(a+b+c)/3;
	printf("The average of %d , %d and %d is: %d",a,b,c,x);
	return 0;
}
