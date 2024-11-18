#include<stdio.h>
int main(){
	int a,b;
	printf("\nEnter the no of columns : ");
	scanf("%d",&a);
	printf("Enter the no of rows : ");
	scanf("%d",&b);
	
	int array[a][b],i,j,scalar;
	
	
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at the position [%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nEnter the scalar value : ");
	scanf("%d",&scalar);
	
	printf("\nThe Matrix is : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}	
	
	printf("\n The scalar multiplicated matrix is : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]*scalar);
		}
		printf("\n");
	}
	
	return 0;
}
