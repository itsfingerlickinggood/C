#include<stdio.h>
int main(){
	int a;
	printf("Enter the number upto which sum is to finded and to printed : ");
	scanf("%d",&a);
	
	int i,j=0;
	
	for(i=0;i<=a;i++){
		j+=i;
	}
	
	printf("\n\tThe Sum of first %d numbers is : %d",a,j);
	
	return 0;
}
