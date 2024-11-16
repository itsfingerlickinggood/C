#include<stdio.h>
int main(){
	int a , b ;
	printf("Enter the no of columns for the array : ");
	scanf("%d",&a);
	printf("Enter the no of rows for the array : ");
	scanf("%d",&b);
	int array[a][b];
	
	int i ,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	} 
	
	printf("\nThe matrix is : ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\n\tThe element at array[%d][%d] -> %d ",i,j,array[i][j]);
		}
	} 
}
