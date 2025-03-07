#include<stdio.h>
int main(){
	int a,i;
	printf("Enter the number to print the multiplication table : ");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++){
		printf("\n\t%d * %d = %d",a,i,a*i);
	}
	
	return 0;
}
