#include<stdio.h>
int main(){
	int a,i;
	printf("Enter the no of elements for the array :");
	scanf("%d",&a);
	
	int array[a];
	
	for(i=0;i<a;i++){
		printf("Enter the element at the position [%d] : ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\nThe array is :\n");
	for(i=0;i<a;i++){
		printf("\t%d",array[i]);
	}
	
	int firstBig=0,secondBig=0;
	
	for(i=0;i<a;i++){
		if(array[i]>firstBig){
			firstBig=array[i];
		}
	}
	
	for(i=0;i<a;i++){
		if(array[i]>secondBig && array[i]<firstBig){
			secondBig=array[i];
		}
	}
	
	printf("\n\nThe second biggest element is %d !",secondBig);
	
	return 0;
}
