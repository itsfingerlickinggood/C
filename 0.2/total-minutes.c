#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the hours: ");
	scanf("%d",&a);
	printf("Enter the minutes: ");
	scanf("%d",&b);
	c=(a*60)+b;
	printf("The total minutes is: %dmins",c);
	return 0;
}
