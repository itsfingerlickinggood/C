#include <stdio.h>
int main(){
	float a,b;
	printf("Enter the temperature in celsius: ");
	scanf("%f",&a);
	b=((9.0/5.0)*a)+32;
	printf("The temperature in fahrenhiet is %.2f",b);
	return 0;
}
