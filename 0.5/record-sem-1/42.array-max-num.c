#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter the number of Elements for the array : ");
	scanf("%d",&a);
	
	int array[a];
	
	for(i=0;i<a;i++){
		printf("Enter the element at [%d] : ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\nThe array is : \n");
	for(i=0;i<a;i++){
		printf("\t%d",array[i]);
	}
	
	int intMax=0;
	
	for(i=0;i<a;i++){
		if(intMax<array[i]){
				intMax=array[i];
		}
	}
	
	printf("\nThe biggest element in the array is %d !\n",intMax);
	
	return 0;
}
