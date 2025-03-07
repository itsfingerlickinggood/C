#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,i,*arr;
	
	printf("Enter the no of elements : ");
	scanf("%d",&a);
	
	arr=(int *)malloc(a*sizeof(int));
	
	for(i=0;i<a;i++){
		printf("Enter element at position[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe elements entered are : \n");
	for(i=0;i<a;i++){
		printf(" %d ",arr[i]);
	}
	
	free(arr);
	
	return 0;
}
