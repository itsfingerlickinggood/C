#include <stdio.h>
int main(){
	float a,p;
	printf("Enter radius to find the area of the circle: ");
	scanf("%f",&a);
	p=3.14*(a*a);
	printf("The Area of the circle is %.2f",p);
}
