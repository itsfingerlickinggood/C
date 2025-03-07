#include<stdio.h>
int main(){
	int a,b,i,j;
	
	printf("Enter the rows: ");
	scanf("%d",&a);
	printf("Enter the columns: ");
	scanf("%d",&b);
	
	int array[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at [%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}
	
	
	int sumcol,sumrow;
	
	for(i=0;i<a;i++){
		sumrow=0;
		for(j=0;j<b;j++){
			sumrow+=array[i][j];
		}
		printf("\nSum of row-%d is : %d",i+1,sumrow);
	}
	
	printf("\n\n");
	
	for(i=0;i<b;i++){
		sumcol=0;
		for(j=0;j<a;j++){
			sumcol+=array[j][i];
		}
		printf("\nSum of col-%d is : %d",i+1,sumcol);
	}

	return 0;	
}
