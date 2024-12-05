#include<stdio.h>
int main(){
	int a;
	
	printf("Enter the temperature in Fahrenheit to be converted to Celsius : ");
	scanf("%d",&a);
	
	printf("The temperature in Fahrenheit is : %.3fF",(a-32)*(5.0/9.0));
	
	return 0;
}
