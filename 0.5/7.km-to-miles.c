#include<stdio.h>
int main(){
	int a;
	
	printf("Enter the km/h to be converted : ");
	scanf("%d",&a);
	
	printf("\nThe %d km/h in miles/hour is : %0.2f",a,a*0.621371);

	return 0;
}
