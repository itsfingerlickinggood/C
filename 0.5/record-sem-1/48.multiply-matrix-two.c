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
	
	printf("\nARRAY-1 :\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array1[i][j]);
		}
		printf("\n");
	}
	
	int x,y;
	
	printf("Enter the no of row for array-2: ");
	scanf("%d",&x);
	printf("Enter the no of column for array-2: ");
	scanf("%d",&y);
	
	int array2[x][y];
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Enter element at [%d][%d]: ",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	
	printf("\nARRAY-2 :\n");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("\t%d",array2[i][j]);
		}
		printf("\n");
	}
	
	int choice;
	
	printf("Enter 1 to perform matrix multiplication :");
	scanf("%d",&choice);
	
	if(choice==1){
		if(b==x){
			printf("\nMATRIX MULTIPLICATION ! \n");
			
			int k,matrix[a][y];
			
			for(i=0;i<a;i++){
				for(j=0;j<y;j++){
					matrix[i][j]=0;
					for(k=0;k<b;k++){
						matrix[i][j]+=array1[i][k]*array2[k][j];
					}
					printf("\t%d",matrix[i][j]);
				}
				printf("\n");
			}
			
		}
		else{
			printf("\nMATRIX MULTIPLICATION NOT POSSIBLE !\n");
		}
	}else{
		printf("\nINVALID CHOICE!");
	}
	
	return 0;
}
