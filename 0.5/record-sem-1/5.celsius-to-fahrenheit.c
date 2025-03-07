#include<stdio.h>
int main(){
	int a;
	
	printf("Enter the temperature in Celsius to be converted to Fahrenheit : ");
	scanf("%d",&a);
	
	printf("The temperature in Fahrenheit is : %.2fF",((9.0/5.0)*a)+32);
	
	return 0;
}
