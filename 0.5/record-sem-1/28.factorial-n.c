#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number to find the factorial : ");
	scanf("%d",&a);
	
	b=a;
	int i=1;
	
	while(a>0){
		i=i*a;
		a--;
	}
	
	printf("The factorial of number %d is %d",b,i);
	
	return 0;
}

