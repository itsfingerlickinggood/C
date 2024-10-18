#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Enter a choice : \t\n1.Add\t\n2.Diiference\t\n3.Divide\t\n4.Divide\n\tThe choice is : ");
	scanf("%d",&c);
	switch(c){
		case 1:
			d=a+b;
			printf("The sum of %d and %d is : %d",a,b,d);
			break;
		case 2:
			d=a-b;
			printf("The difference of %d and %d is : %d",a,b,d);
			break;
		case 3:
			d=a*b;
			printf("The multiplication of %d and %d is : %d",a,b,d);
			break;
		case 4:
			d=a/b;
			printf("The sum of %d and %d is : %d",a,b,d);
			break;
		default :
			printf("Invlaid choice !");
	}
}
