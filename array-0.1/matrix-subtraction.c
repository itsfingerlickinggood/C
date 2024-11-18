#include<stdio.h>
int main(){
	int a , b ;
	printf("Enter the no of columns for the array : ");
	scanf("%d",&a);
	printf("Enter the no of rows for the array : ");
	scanf("%d",&b);
	int array1[a][b];
	
	int i ,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at array[%d][%d] : ",i,j);
			scanf("%d",&array1[i][j]);
		}
	} 
	
	printf("\nThe ARRAY-1 is : ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\n\tThe element at array[%d][%d] -> %d ",i,j,array1[i][j]);
		}
	} 
	
	int k ,l;
	int array2[a][b];
	for(k=0;k<a;k++){
		for(l=0;l<b;l++){
			printf("\nEnter the element at array[%d][%d] : ",k,l);
			scanf("%d",&array2[k][l]);
		}
	} 
	
	printf("\nThe ARRAY-2 is : ");
	for(k=0;k<a;k++){
		for(l=0;l<b;l++){
			printf("\n\tThe element at array[%d][%d] -> %d ",k,l,array2[k][l]);
		}
	} 
	
	printf("\nThe added array1 + array2 is :");
	int m ,n;
	int array3[a][b];
	for(m=0;m<a;m++){
		for(n=0;n<b;n++){
			printf("\n\tthe element at position[%d][%d] is %d: ", m,n,array1[m][n]-array2[m][n]);
		}
	} 
}
