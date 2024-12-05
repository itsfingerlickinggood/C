#include<stdio.h>
int main(){
	int a;
	float b;
	
	printf("Enter the radius of the circle (in m) : ");
	scanf("%d",&a);
	b=(22.0/7.0)*a*a;
	
	printf("The Area of circle with radius %dm is : %.2fm",a,b);
	
	return 0;
}
