#include<stdio.h>
int main(){
	int a,b,i,j=0;;
	
	printf("Enter the number of elements to be added : ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("Enter the element at position[%d] : ",i);
		scanf("%d",&b);
		j+=b;
	}
	
	printf("The total sum of these numbers is : %d",j);
	
	return 0;
}
