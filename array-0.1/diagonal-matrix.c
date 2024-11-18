#include<stdio.h>
int main(){
	int a,b;
	printf("\nEnter the no of columns : ");
	scanf("%d",&a);
	printf("Enter the no of rows : ");
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
	
	int sum = 0;
	
	printf("\n The sum of diagonal elements is : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==j){
				sum+= array[i][j];
			}
			if(a==b && i+j==a-1){
					sum+=array[i][j];
			}	
		}	
	}
	
	printf("%d",sum);
	
	return 0;
}
