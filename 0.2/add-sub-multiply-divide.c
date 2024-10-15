#include <stdio.h>
int main(){
	int a,b,c;
	int x,y;
	printf("Enter the first number to perform the calculations: ");
	scanf("%d",&a);
	printf("Enter the second number to perform the calculations: ");
	scanf("%d",&b);
	printf("Enter the following number to perform arthemetic Operations\n\t1.Add\n\t2.Subtract\n\t3.Multiply\n\t4.Divide\n");
	scanf("%d",&x);
	y=0;
	while(y==0){
		if(x==1){
			c=a+b;
			y=1;
			
		}
		else if(x==2){
			c=a-b;
			y=1;
			
		}
		else if(x==3){
			c=a*b;
			y=1;
			
		}
		else if(x==4){
			c=a/b;
			y=1;
		}
		else{
			printf("Invalid!");
		}
	}
	printf("The answer is: %d",c);
	return 0;
}
