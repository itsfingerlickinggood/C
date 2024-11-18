#include<stdio.h>
int main(){
	int a,b;
	printf("\n\tTRANSOPOSING A MATRIX");
	printf("\n\t---------------------");
	printf("\nEnter the no of columns : ");
	scanf("%d",&a);
	printf("Enter the no of rows : ");
	scanf("%d",&b);
	
	int array1[a][b],i,j;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the number at the position [%d][%d] : ",i,j);
			scanf("%d",&array1[i][j]);	
		}
	}
	
	printf("\nThe matrix is : \n");
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array1[i][j]);
		}
		printf("\n");
	}
	
	int array2[b][a];
	printf("\nThe transposed-matrix is : \n");
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			array2[j][i]=array1[i][j];
		}
	}
	
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			printf("\t%d",array2[i][j]);
		}
		printf("\n");
	}
}
