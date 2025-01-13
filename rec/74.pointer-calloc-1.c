#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int size,i,*arr;

	printf("Enter the no of elements : ");
	scanf("%d",&size);
	
	arr=(int*)calloc(size,sizeof(int));
	
	for(i=0;i<size;i++){
		printf("Enter element at %d : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("The elements are : ");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	
	free(arr);
	
	return 0;
}

