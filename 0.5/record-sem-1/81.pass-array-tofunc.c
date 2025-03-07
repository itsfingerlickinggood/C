#include<stdio.h>

void dispArray(int arr[],int size){
	int i;
	printf("The elements of array are : ");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}

void modArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]*2);
	}
	printf("\n");
}

int main(){	
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	dispArray(arr,size);
	printf("The modified array is :");
	modArray(arr,size);
	
	return 0;	
}
