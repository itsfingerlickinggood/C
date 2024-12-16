#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter the number of Elements : ");
	scanf("%d",&a);
	
	int array[a];
	
	for(i=0;i<a;i++){
		printf("Enter the element at the position [%d]: ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\nThe array is :\n");
	for(i=0;i<a;i++){
		printf("\t%d",array[i]);
	}
	
	printf("\nThe Elements of Array at Even Position :\n");
	for(i=0;i<a;i++){
		if(i%2==0){
			printf("\t[%d]-%d",i,array[i]);
		}
	}
	
	printf("\nThe Elements of Array at Odd Position :\n");
	for(i=0;i<a;i++){
		if(i%2!=0){
			printf("\t[%d]-%d",i,array[i]);
		}
	}
	
	return 0;
}
