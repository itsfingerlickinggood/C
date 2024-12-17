#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the no of row for the arrays: ");
	scanf("%d",&a);
	printf("Enter the no of column for the arrays: ");
	scanf("%d",&b);
	
	int i,j,array[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at [%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nARRAY-1:\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}
	
	int array2[a][b];
	
	printf("\nFOR ARRAY-2 :\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at [%d][%d]: ",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	
	printf("\nARRAY-2:\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTHE ADDED ARRAY IS :\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]+array2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
