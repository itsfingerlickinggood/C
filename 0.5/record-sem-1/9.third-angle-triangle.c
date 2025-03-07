#include<stdio.h>
int main(){
	float a,b;
	
	printf("Enter the first angle of the triangle : ");
	scanf("%f",&a);
	printf("Enter the second angle of the triangle : ");
	scanf("%f",&b);
	
	printf("\nThe third angle of the triangle is %.1f",(180.0-(a+b)));
	
	return 0;
}
