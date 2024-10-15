#include <stdio.h>
int main(){
	int a,b,x,y;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Right now the variables are of a=%d and b=%d\t\n",a,b);
	x=b;
	y=a;
	printf("After interchanging , a=%d and b=%d",x,y);
	return 0;
}
