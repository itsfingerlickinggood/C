#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number to find the reverse : ");
	scanf("%d",&a);
	
	b=a;
	int reverse=0,x;
	
	while(a>0){
		x=a%10;
		reverse=reverse*10+x;
		a=a/10;
	}
	
	printf("The reverse of %d is %d",b,reverse);
	
	return 0;	
}
