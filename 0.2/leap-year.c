#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the year to check for leap year: ");
	scanf("%d",&a);
	if(a%100==0 && a%4==0){
		printf("It is not a leap year");
	}
	else if(a%4==0 || a%400==0){
		printf("It is a leap year");
	}
	else{
		printf("Invalid!");
	}
	return 0;
}
