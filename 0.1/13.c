#include <stdio.h>
int main(){
	int i,a,b,c,x,y;
	printf("Enter the first no :");
	scanf("%d",&a);
	printf("Enter the second no :");
	scanf("%d",&i);
	b=0;
	c=0;
	if(a>i){
		x=a;
		y=i;
	}
	else{
		x=i;
		y=a;
	}
	
	while(y<=x){
		x--;
		c++;
	}
	printf("The answer is : %d",b);
}
