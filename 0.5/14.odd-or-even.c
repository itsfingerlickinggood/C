#include<stdio.h>

int main(){
	int a;
	
	printf("Enter the number to check whether the number is odd or even : ");
	scanf("%d",&a);

	if(a%2==0){
		printf("\n\tThe entered number %d is Even !",a);
	}
	else{
		printf("\n\tThe entered number %d is Odd !",a);
	}
	
	return 0;
}
