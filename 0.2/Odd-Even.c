#include <stdio.h>
int main(){
	int a;
	printf("Enter the number to check whether it is odd or even: ");
	scanf("%d",&a);
	if(a==0){
		printf("Zero is neither odd or even");
	}
	else if(a%2==0){
		printf("The number %d is Even",a);
	}
	else{
		printf("The number %d is Odd",a);

	}
	return 0;
}
