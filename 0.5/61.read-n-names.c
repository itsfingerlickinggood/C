#include<stdio.h>
int main(){
	int a,i;
	printf("Enter the no of names to be printed : ");
	scanf("%d",&a);
	
	char arr[a][50];
	
	for(i=0;i<a;i++){
		printf("Enter the name :");
		scanf("%s",arr[i]);
	}
	
	printf("\nThe names are :");
	for(i=0;i<a;i++){
		printf("\n%s",arr[i]);
	}
	
	return 0;
}
