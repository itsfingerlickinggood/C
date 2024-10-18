#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number to check for abs value: ");
	scanf("%d",&a);
	if(a>0){
		printf("Abs value is: %d",a);
	}
	else{
		printf("Abs value is: %d",-a);
	}
	return 0;
}
