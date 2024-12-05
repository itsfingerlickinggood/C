#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter the length of rectangle(in m) : ");
	scanf("%d",&a);
	printf("Enter the breadth of rectangle(in m) : ");
	scanf("%d",&b);
	
	printf("The Area of the rectangle is %dm\nThe Perimeter of the rectangle is %dm",a*b,2*(a+b));
	
	return 0;
}
