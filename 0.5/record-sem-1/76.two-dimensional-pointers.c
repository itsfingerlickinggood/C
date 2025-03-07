#include<stdio.h>
#include<stdlib.h>

int main(){ 
	int rows,columns,i,j,**arr;
	
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	printf("Enter the no of columns : ");
	scanf("%d",&columns);
	
	arr=(int**)malloc(rows*sizeof(int*));
	
	for(i=0;i<rows;i++){
		arr[i]=	(int*)malloc(columns*sizeof(int));
	}
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Enter the element at [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nThe Array is : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\t");
	}
	
	for(i=0;i<rows;i++){
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
