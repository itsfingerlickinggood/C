#include<stdio.h>
int main(){
	int a,b,i,j;
	
	printf("Enter the no of row for array-1: ");
	scanf("%d",&a);
	printf("Enter the no of column for array-1: ");
	scanf("%d",&b);
	
	int array1[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter element at [%d][%d]: ",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
	
	printf("\nARRAY is :\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTRANSPOED-ARRAY is :\n");
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			printf("\t%d",array1[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
