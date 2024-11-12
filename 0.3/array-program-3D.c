#include<stdio.h>
int main(){
	int a , b , c , i , j , k;
	printf("Enter the no of X-axis : ");
	scanf("%d",&a);
	printf("Enter the no of Y-axis : ");
	scanf("%d",&b);
	printf("Enter the no of Z-axis : ");
	scanf("%d",&c);
	
	int array[a][b][c];
	
	for (i=0;i<a;i++){
		for(j=0;j<b;j++){
			for(k=0;k<c;k++){
				printf("Enter the element at [%d][%d][%d] :",i,j,k);
				scanf("%d",&array[i][j][k]);
			}
		}
	}
	printf("\nThe array is : \n");
	for (i=0;i<a;i++){
		for(j=0;j<b;j++){
			for(k=0;k<c;k++){
				printf("%d\t",array[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
