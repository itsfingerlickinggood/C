#include <stdio.h>
int main(){
	int a;
	printf("Enter the number ot check whether it is EVEN or ODD : ");
	scanf("%d",&a);
	if(a%2==0){
		printf("The number %d is Even",a);
	}
	else{
		printf("The number %d is Odd",a);
	}
}
