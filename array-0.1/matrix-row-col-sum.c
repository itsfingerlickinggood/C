#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter the no of rows : ");
	scanf("%d",&a);
	printf("Enter the no of columns : ");
	scanf("%d",&b);
	
	int array[a][b],i,j;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at the position [%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nThe Matrix is : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe sum of each row is  : ");
	int row;
	for(i=0;i<a;i++){
		row=0;
		for(j=0;j<b;j++){
			row+=array[i][j];
		}
		printf("\n\trow[%d]->%d",i,row);
	}
	
	
	int array2[b][a];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			array2[j][i]=array[i][j];
		}
	}
	
	printf("\nThe sum of each column is  : ");
	int col;
	for(i=0;i<b;i++){
		col=0;
		for(j=0;j<a;j++){
			col+=array2[i][j];
		}
		printf("\n\tcolumn[%d]->%d",i,col);
	}
	
}
