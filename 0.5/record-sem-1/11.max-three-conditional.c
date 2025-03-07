#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("Enter then third number : ");
	scanf("%d",&c);
	
	a > b ? ( a > c ? printf("%d is greater",a) :  printf("%d is greater",c)) : ( b > c ? printf("%d is greater",b) :  printf("%d is greater",c));
	
	return 0;
}
