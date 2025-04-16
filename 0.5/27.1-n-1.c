#include<stdio.h>
int main(){
	int a;
	printf("Enter the number to print from 1 to n and n to 1 : ");
	scanf("%d",&a);
	
	int i;
	
	printf("\n\tThe number from 1 to %d :\n",a);
	for(i=1;i<=a;i++){
		printf("%d\t",i);
	}
	
	printf("\n\n\tThe number from %d to 1 :\n",a);
	for(i=a;i>0;i--){
		printf("%d\t",i);
	}
	
	return 0;
}
