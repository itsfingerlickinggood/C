#include<stdio.h>
int main(){
	int a,b,difference=0,x;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	if(a>b){
		x=a;
		while(a>b){	
			a--;
			difference++;
		}
		printf("The Difference between %d and %d is %d",x,b,difference);
	}
	else if(b>a){
		x=b;
		while(b>a){
			b--;
			difference++;
		}
		printf("The Difference between %d and %d is %d",x,a,difference);
	}
	else{
		printf("They are Equal !");
	}
	
	return 0;
}
