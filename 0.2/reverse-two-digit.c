#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the number to be reversed: ");
	scanf("%d",&a);
	b=(a%10)*10+(a/10);
	printf("The reversed is %d",b);
	return 0;
}
