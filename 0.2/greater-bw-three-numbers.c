#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("The number %d is greater",a);
		}
		else{
			printf("The number %d is greater",c);
		}
	}
	else if(c>b){
		printf("The number %d is greater",c);
	}
	else{
		printf("The number %d is greater",b);
	}
}




