#include <stdio.h>
int main(){
	float a,b;
	printf("Enter the kilometres to convert into miles: ");
	scanf("%f",&a);
	b=a*0.621371;
	printf("%.2fkm in miles is %.3fmi",a,b);
	return 0;
}
